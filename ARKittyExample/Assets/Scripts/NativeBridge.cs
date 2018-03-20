using System;
using System.Collections;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.UI;

public class NativeBridge : MonoBehaviour
{
    [SerializeField]
    private Toggle toggle;

    private bool skipToggleChangeEvent;

	public GameObject[] ARObjects;

#if UNITY_IOS && !UNITY_EDITOR
    [DllImport("__Internal")]
    private extern static void UnityAnimateKitten();
    private extern static void UnityTakeScreenshot(bool showObjs);
#else
    private void UnityAnimateKitten()
    {
		AnimateKitten();
    }
	private void UnityTakeScreenshot(bool showObjs){
		Screenshot( showObjs ? "showObjs" : "noObjs" );
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

	private void Screenshot(string cmd){
		Debug.Log( "-> Screenshot(): " + cmd );

		ARObjects = GameObject.FindGameObjectsWithTag("ARObject");
        foreach (GameObject ARObject in ARObjects)
        {
            ARObject.SetActive(false);
			Debug.Log ("WE DEACTIVATED SOMETHING WE DEACTIVATED SOMETHING WE DEACTIVATED SOMETHING WE DEACTIVATED SOMETHING");
        }

        string filename = "/Screenshot";
		ScreenCapture.CaptureScreenshot(filename);

		//resetToActive(ARObjects);



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
