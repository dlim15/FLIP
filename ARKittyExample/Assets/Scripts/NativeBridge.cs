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
#else
    private void UnityAnimateKitten()
    {
		AnimateKitten();
    }
#endif

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

    private void AnimateKitten()
    {
        Debug.Log( "888888888888888888888888888888888888888888888888" );
        Debug.Log( "WOW THIS WORKED" );



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
    }
}
