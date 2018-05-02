using System;
using System.Text;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.UI;

public unsafe class NativeBridge : MonoBehaviour
{
    [SerializeField]
    private Toggle toggle;

    private bool skipToggleChangeEvent;
	private bool isSavingScreenshot;
	private string filename;
	private string ARObjStats;

	public GameObject[] ARObjects;

#if UNITY_IOS && !UNITY_EDITOR
    [DllImport("__Internal")]
	private extern static void UnityFinishedTakingScreenshot( string filename, string ARObjStats );
#else
	private void UnityFinishedTakingScreenshot( string filename, string ARObjStats ){
		Debug.Log( "We don't have anything to handle this :(" );
	}
#endif

    private void AnimateKitten()
    {
        Debug.Log( "-> AnimateKitten()" );
		//resetToActive (GameObject.FindGameObjectsWithTag ("ARObject"));
		foreach (GameObject ARObject in ARObjects)
		{
			ARObject.SetActive(true);
		}
    }
		
	private String Screenshot(string cmd){
		Debug.Log( "-> Screenshot(): " + cmd );
		printAllObjectStats();

		ARObjStats = "";
		if (cmd == "-5") {
			ARObjStats = createARObjectStatsDictionary ();
		}


		ARObjects = GameObject.FindGameObjectsWithTag("ARObject");

        foreach (GameObject ARObject in ARObjects)
        {
			ARObject.transform.position = new Vector3(ARObject.transform.position.x,
											 		  ARObject.transform.position.y + 99999,
													  ARObject.transform.position.z);
        }

		GameObject[] UIElements = GameObject.FindGameObjectsWithTag ("UIElement");
		foreach (GameObject ARObject in UIElements)
		{
			ARObject.transform.position = new Vector3(ARObject.transform.position.x,
				ARObject.transform.position.y + 99999,
				ARObject.transform.position.z);
		}

		filename = "/" + DateTime.Now.ToString("yyyyMMddHHmmss") + cmd + "_Screenshot" + ".jpg";

		ScreenCapture.CaptureScreenshot(filename);

		isSavingScreenshot = true;
		return filename;
	}

	private void printAllObjectStats(){
		ARObjects = GameObject.FindGameObjectsWithTag("ARObject");
		foreach (GameObject ARObject in ARObjects)
		{
			Debug.Log (string.Format (ARObject.ToString() + ":\n" +
									  "Position:\n" +
									  "x:{0:0.######}\n" +
									  "y:{1:0.######}\n" +
									  "z:{2:0.######}\n" +
									  "Rotation:\n" +
  									  "xr:{3:0.######}\n" +
									  "yr:{4:0.######}\n" +
									  "zr:{5:0.######}\n" +
									  "Scale\n" +
									  "xs:{6:0.######}\n" +
									  "ys:{7:0.######}\n" +
									  "zs:{8:0.######}\n",
				    ARObject.transform.position.x, 
				    ARObject.transform.position.y, 
					ARObject.transform.position.z,
					ARObject.transform.rotation.x,
					ARObject.transform.rotation.y,
					ARObject.transform.rotation.z,
					ARObject.transform.localScale.x,
					ARObject.transform.localScale.y,
					ARObject.transform.localScale.z
			));
		}
	}

	private Dictionary<string, string> createObjectStatDictionary( GameObject obj ){
		Dictionary<string, string> result = new Dictionary<string, string> ();
		result.Add ("name", obj.ToString ());
		result.Add ("xpos", string.Format( "{0:0.######}", obj.transform.position.x ));
		result.Add ("ypos", string.Format( "{0:0.######}", obj.transform.position.y ));
		result.Add ("zpos", string.Format( "{0:0.######}", obj.transform.position.z ));
		result.Add ("xrot", string.Format( "{0:0.######}", obj.transform.rotation.x ));
		result.Add ("yrot", string.Format( "{0:0.######}", obj.transform.rotation.y ));
		result.Add ("zrot", string.Format( "{0:0.######}", obj.transform.rotation.z ));
		result.Add ("xsca", string.Format( "{0:0.######}", obj.transform.localScale.x ));
		result.Add ("ysca", string.Format( "{0:0.######}", obj.transform.localScale.y ));
		result.Add ("zsca", string.Format( "{0:0.######}", obj.transform.localScale.z ));
		return result;
	}

	private string createARObjectStatsDictionary(){
		Dictionary<string, string> result = new Dictionary<string, string> ();
		ARObjects = GameObject.FindGameObjectsWithTag("ARObject");
		foreach (GameObject ARObject in ARObjects) {
			string ARObjName = ARObject.ToString ().Split ( ' ' ) [0];
			string objStats = MyDictionaryToJson (createObjectStatDictionary (ARObject));

			result.Add ( ARObjName, objStats );
		}
		return MyDictionaryToJson(result);
	}

	string MyDictionaryToJson(Dictionary<string, string> dict)
	{
		var entries = dict.Select(d =>
			string.Format("\"{0}\": [{1}]", d.Key, d.Value));
		return "{" + string.Join(",", entries.ToArray()) + "}";
	}

	void Update(){
		if (isSavingScreenshot && System.IO.File.Exists(Application.persistentDataPath + filename )) {
			isSavingScreenshot = false;
			Debug.Log ( ARObjStats );
			UnityFinishedTakingScreenshot( filename, ARObjStats );
			ARObjects = GameObject.FindGameObjectsWithTag("ARObject");
			foreach (GameObject ARObject in ARObjects)
			{
				ARObject.transform.position = new Vector3(ARObject.transform.position.x,
														  ARObject.transform.position.y - 99999,
														  ARObject.transform.position.z);
			}

			GameObject[] UIElements = GameObject.FindGameObjectsWithTag ("UIElement");
			foreach (GameObject ARObject in UIElements)
			{
				ARObject.transform.position = new Vector3(ARObject.transform.position.x,
					ARObject.transform.position.y - 99999,
					ARObject.transform.position.z);
			}

		}
	}

	//	IEnumerator resetToActive(GameObject[] ARObjects) 
//	{
//		foreach (GameObject ARObject in ARObjects)
//		{
//			ARObject.SetActive(true);
//		}
//	}

//    public void OnToggleValueChanged(bool isOn)
//    {
//        if (!skipToggleChangeEvent)
//        {
//
//            UnityToggleRotation(isOn);
//
//        }
//
////        CubeController.I.ShouldRotate = isOn;
//    }

//    private void AnimateKitten()
//    {
//        switch (command)
//        {
//            case "start":
//                CubeController.I.ShouldRotate = true;
//                break;
//            case "stop":
//                CubeController.I.ShouldRotate = false;
//                break;
//        }
//
//        skipToggleChangeEvent = true;
//        toggle.isOn = CubeController.I.ShouldRotate;
//        skipToggleChangeEvent = false;
//    }

}
