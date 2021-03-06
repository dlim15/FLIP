//
//  ARController.swift
//  unitySwiftTest
//
//  Created by Devin Lim on 2/27/18.
//  Copyright © 2018 Jeremy Ronquillo. All rights reserved.
//

import UIKit
import CoreLocation
public extension UIWindow{
    func captureScreen() -> UIImage?{
        UIGraphicsBeginImageContextWithOptions(self.frame.size, self.isOpaque, UIScreen.main.scale)
        self.layer.render(in: UIGraphicsGetCurrentContext()!)
        let image = UIGraphicsGetImageFromCurrentImageContext()
        UIGraphicsEndImageContext()
        return image
    }
}

class ARController: UIViewController, UINavigationControllerDelegate, UIImagePickerControllerDelegate, CLLocationManagerDelegate {

    let MAX_PICTURES = 6
    var picturesTaken : Int = 0
    let appDelegate = UIApplication.shared.delegate as? AppDelegate
    var imagePicker: UIImagePickerController!
    var imgSet : [String] = [String()]
    var imgSurface :[String] = ["front","left","back","right","ceiling","floor",""]
    let sqlCommand = SqlCommand()
    @IBOutlet weak var btnBack: UIButton!
    @IBOutlet weak var loadingSpinner: UIActivityIndicatorView!
    @IBOutlet weak var cameraButton: UIButton!
    @IBOutlet weak var lblInstruction: UILabel!
    @IBOutlet weak var btnUndo: UIButton!
    @IBOutlet weak var loadButton: UIButton!
    var pid = -1
    var isNewProject : Bool = true
    let locationManager = CLLocationManager()
    var locality:String? = ""
    var postal:String? = ""
    var admin:String? = ""
    var country:String? = ""
    var latitude:Float = 0
    var longitude:Float = 0
    
    override func viewDidLoad() {
        super.viewDidLoad()
        NotificationCenter.default.addObserver(self, selector: #selector(UnityFinishedTakingScreenshot(_:)), name: NSNotification.Name("UnityFinishedTakingScreenshot"), object: nil)
        self.navigationController?.isNavigationBarHidden = true
        self.navigationItem.setHidesBackButton(true, animated:false)
        loadingSpinner.stopAnimating()
        picturesTaken = 0
        imgSet.removeAll()
        initLocation()
        loadButton.isHidden = isNewProject
        // Do any additional setup after loading the view.
    }
    
    @objc func handleUnityReady() {
        btnBack.isHidden = false
        showUnitySubView()
    }
    func initLocation(){
       
        locationManager.delegate = self
        locationManager.distanceFilter = kCLDistanceFilterNone
        locationManager.desiredAccuracy = kCLLocationAccuracyBest
        if  CLLocationManager.authorizationStatus() != .authorizedWhenInUse{
            locationManager.requestWhenInUseAuthorization()
        }
    }
    func findLocation(){
        if  CLLocationManager.authorizationStatus() == .authorizedWhenInUse{
            locationManager.startUpdatingLocation()
            findLocation(manager: locationManager)
        }
    }
    @IBAction func ARViewBackAction(_ sender: UIButton) {
        appDelegate?.stopUnity()
        
        navigationController?.popViewController(animated: true)
        self.dismiss(animated: true, completion: nil)
        self.navigationController?.isNavigationBarHidden = false
    }
    
    func showUnitySubView() {
        if let unityView = UnityGetGLView() {
            // insert subview at index 0 ensures unity view is behind current UI view
            view?.insertSubview(unityView, at: 0)
            
            unityView.translatesAutoresizingMaskIntoConstraints = false
            let views = ["view": unityView]
            let w = NSLayoutConstraint.constraints(withVisualFormat: "|-0-[view]-0-|", options: [], metrics: nil, views: views)
            let h = NSLayoutConstraint.constraints(withVisualFormat: "V:|-0-[view]-0-|", options: [], metrics: nil, views: views)
            view.addConstraints(w + h)
        }
    }
    func showUnity() {
        appDelegate?.startUnity()
        NotificationCenter.default.addObserver(self, selector: #selector(handleUnityReady), name: NSNotification.Name("UnityReady"), object: nil)
        handleUnityReady()
    }
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear( animated )
        showUnity()
        self.navigationController?.isNavigationBarHidden = true
        self.btnUndo.isHidden = true
        self.cameraButton.setImage(UIImage(named: "0_cameraIcon.png"), for: UIControlState.normal)
        picturesTaken = 0
        self.lblInstruction.isHidden = false
        surfaceSideGuide(i:0)
        findLocation()
    }
    func findLocation(manager: CLLocationManager!){
        print("HERE2")
        latitude = Float((manager.location?.coordinate.latitude)!)
        longitude = Float((manager.location?.coordinate.longitude)!)
        CLGeocoder().reverseGeocodeLocation(manager.location!, completionHandler: {(placemarks, error)->Void in
            if (error != nil) {
                print("Reverse geocoder failed with error" + (error?.localizedDescription)!)
                return
            }
            
            if (placemarks?.count)! > 0 {
                let pm = placemarks?[0]
                self.displayLocationInfo(pm)
            } else {
                print("Problem with the data received from geocoder")
            }
        })
    }
    func displayLocationInfo(_ placemark: CLPlacemark?){
        if let containsPlacemark = placemark{
            locationManager.stopUpdatingLocation()
            locality = (containsPlacemark.locality != nil) ? containsPlacemark.locality : ""
            postal = (containsPlacemark.postalCode != nil) ? containsPlacemark.postalCode : ""
            admin = (containsPlacemark.administrativeArea != nil) ? containsPlacemark.administrativeArea : ""
            country = (containsPlacemark.country != nil) ? containsPlacemark.country : ""
        }
    }
    func surfaceSideGuide(i: Int) {
        self.lblInstruction.text = "Take " + imgSurface[ i ] + " side."
    }
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    @IBAction func btnUndoAction(_ sender: UIButton) {
        loadingSpinner.startAnimating()
        if let dir = FileManager.default.urls(for: .documentDirectory, in: .userDomainMask).first {
            let fileURL = dir.appendingPathComponent("\(imgSet[picturesTaken - 1].components(separatedBy: "/")[1] )")
            do{
                try FileManager.default.removeItem(at: fileURL)
            } catch {
                print( "Failed to remove file: \(fileURL)" )
            }
            
        }
        
        picturesTaken -= 1
        imgSet.remove(at: picturesTaken)
        actionOnPicture(i: picturesTaken)
        
        loadingSpinner.stopAnimating()
    }
    func actionOnPicture(i:Int){
        surfaceSideGuide(i: picturesTaken)
        self.cameraButton.setImage(UIImage(named: String( picturesTaken ) + "_cameraIcon.png"), for: UIControlState.normal)
        surfaceSideGuide(i:i)
        btnUndo.isHidden = i == 0
    }
    @objc func UnityFinishedTakingScreenshot(_ n: NSNotification) {

        print( "-> UnityFinishedTakingScreenshot()" )
        if let imgName = n.userInfo?["filename"] as? NSString{
            let _:UIWindow! = UIApplication.shared.keyWindow
            print( "Filename: \(imgName)" )
            
            imgSet.append( imgName as String )
            picturesTaken += 1
            actionOnPicture(i: picturesTaken)
            cameraButton.isEnabled = true
            if picturesTaken >= MAX_PICTURES, let ARObjStats = n.userInfo?["arobjstats"] as? String{
                if let dir = FileManager.default.urls(for: .documentDirectory, in: .userDomainMask).first {
                    let fileURL = dir.appendingPathComponent("\(Int(Date.timeIntervalSinceReferenceDate * 1000)).csv")
                    var stringToWrite = ""
                    for filename in imgSet{
                        stringToWrite.append("\(filename)\n")
                    }
                    do {
                        try stringToWrite.write(to: fileURL, atomically: true, encoding: String.Encoding.utf8)
                        print( "SUCCESSFULLY WROTE TO \(fileURL)" )
                    }
                    catch {
                        print( "Failed to write to file." )

                    }
                }
                let arObjStatsDict = convertStatsToDict(stats: ARObjStats)
                print("ARObjectStats:\n\(ARObjStats)")
                
                picturesTaken = 0
                appDelegate?.stopUnity()
                let arRoomViewController:ARRoomViewController = self.storyboard?.instantiateViewController(withIdentifier: "ARRoomViewController") as! ARRoomViewController
                arRoomViewController.setImgSet(paramsImgSet: imgSet)
                if isNewProject{
                    isNewProject = false
                    sqlCommand.createTable()
                    pid = sqlCommand.insertImage(names: imgSet)
                    sqlCommand.selectAllPicture()
                    let haveObject = !arObjStatsDict.isEmpty
                    var specId : Int?
                    specId = nil
                    if !arObjStatsDict.isEmpty{
                        loadButton.isHidden = false
                    }
                    if haveObject{
                        specId = sqlCommand.insertObjectSpec(dataList: arObjStatsDict)
                    }
                    sqlCommand.insertSomeARSpaceElement(pId: pid, specId: specId, city: self.locality!, postal: self.postal!, state: self.admin!, country: self.country!, longitude:longitude, latitude:latitude)
                    sqlCommand.selectArSpace()
                } else {
                    sqlCommand.updateObjectSpec(dataList: arObjStatsDict, spaceId: sqlCommand.getSpaceId(pId: pid))
                    sqlCommand.updateImage(names: imgSet, pid: pid)
                }
                
                imgSet.removeAll()
                arRoomViewController.setSpaceId(pid: pid)
                self.navigationController?.pushViewController(arRoomViewController, animated: true)
            }
        }
        else{
            print("THERE WAS A FAILURE THERE WAS A FAILURE THERE WAS A FAILURE THERE WAS A FAILURE THERE WAS A FAILURE THERE WAS A FAILURE")
        }
        loadingSpinner.stopAnimating()
        
    }
    
    func convertStatsToDict(stats : String) -> [String:[String:Any?]]{
        var result : [String:[String:Any?]] = [String:[String:Any?]]()
        var jsonItems : [String] = [String]()
        let strSplit = stats.components(separatedBy: "{")
        for i in strSplit{
            let splitAgain = i.components(separatedBy: "}")
            for j in splitAgain{
                if j.range(of: "\"") != nil{
                    jsonItems.append(j)
                }
            }
        }
        var i = 0
        var key = ""
        for item in jsonItems{
            if i % 2 == 0{
                key = extractFromQuotes(str: item)
            } else {
                var subDictionary : [String : Any?] = [String: Any?]()
                for subItem in item.components(separatedBy: ","){
                    var subDictItem = subItem.components(separatedBy: ":" )
                    let subKey = extractFromQuotes(str: subDictItem[0])
                    let value = extractFromBrackets(str: subDictItem[1])
                    if Float(value) != nil{
                        subDictionary[subKey] = Float(value)
                    } else {
                        subDictionary[subKey] = value
                    }
                }
                result[key] = subDictionary
            }
            i += 1
        }
        return result
    }
    
    private func extractFromQuotes(str : String) -> String{
        return str.components(separatedBy: "\"")[1].components(separatedBy: "\"")[0]
    }
    
    private func extractFromBrackets(str : String) -> String{
        return str.components(separatedBy: "[")[1].components(separatedBy: "]")[0]
    }
    
    @IBAction func takePhoto(_ sender: Any) {
        cameraButton.isEnabled = false
        loadingSpinner.startAnimating()
        UnityPostMessage("NATIVE_BRIDGE", "Screenshot", "-\(picturesTaken)")
    }
    
    
    
    func saveImageToDirectory(_ chosenImage:UIImage)->String{
        let paths = (NSSearchPathForDirectoriesInDomains(.documentDirectory, .userDomainMask, true)[0] as NSString).appendingPathComponent("test.jpg")
        let url = NSURL.fileURL(withPath: paths)
        
        do {
            try UIImageJPEGRepresentation(chosenImage, 1.0)?.write(to: url, options: .atomic)
            return String.init(paths)
        } catch {
            print(error)
            print("file cant not be save at path \(paths), with error : \(error)");
            return paths
        }
    }
    
    func imagePickerController(_ picker: UIImagePickerController, didFinishPickingMediaWithInfo info: [String : Any]) {
        imagePicker.dismiss(animated: false, completion: nil)
        let fileManager = FileManager.default
        let paths = (NSSearchPathForDirectoriesInDomains(.documentDirectory, .userDomainMask, true)[0] as NSString).appendingPathComponent("test.jpg")
        let image = UIImage(named: "test.jpg")
        print(paths)
        let imageData = UIImageJPEGRepresentation(info[UIImagePickerControllerOriginalImage] as! UIImage, 0.5)
        fileManager.createFile(atPath: paths as String, contents: imageData, attributes: nil)
        
    }
    
    func getDocumentsDirectory() -> URL {
        let paths = FileManager.default.urls(for: .documentDirectory, in: .userDomainMask)
        return paths[0]
    }
    
    @IBAction func loadButtonPressed(_ sender: Any) {
        
        let spaceID = sqlCommand.getSpaceId(pId: pid)
        let info : String = sqlCommand.selectObjectSpec(spaceId: spaceID, isDictionary: false) as! String
        UnityPostMessage("NATIVE_BRIDGE", "loadFromDict", "-\(info)")
    }
    
    func setIsNewProject( isNewProject : Bool ){
        self.isNewProject = isNewProject
    }
    
    func setPid( pid : Int ){
        self.pid = pid
    }

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}


