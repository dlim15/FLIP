using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.UI;

public class NativeBridge : MonoBehaviour
{
    [SerializeField]
    private Toggle toggle;

    private bool skipToggleChangeEvent;

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

    }

	private void Screenshot(string cmd){
		Debug.Log( "-> Screenshot(): " + cmd );
	}

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
