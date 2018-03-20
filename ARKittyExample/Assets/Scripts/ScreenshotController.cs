using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;

public class ScreenshotController : MonoBehaviour {

    public Button button;
    
    // Use this for initialization
	void Start () {
        Button btn = button.GetComponent<Button>();
        btn.onClick.AddListener(TaskOnClick);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    void TaskOnClick()
    {
        GameObject[] ARObjects = GameObject.FindGameObjectsWithTag("ARObject");
        foreach (GameObject ARObject in ARObjects)
        {
            ARObject.SetActive(false);
        }

        string filename = "Screenshot" + DateTime.Now.ToString("yyyyMMddHHmmss") + ".jpg";
        ScreenCapture.CaptureScreenshot(filename);

        foreach (GameObject ARObject in ARObjects)
        {
            ARObject.SetActive(true);
        }
    }
}
