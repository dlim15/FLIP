using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToggleImageBar : MonoBehaviour {
	const int NUM_OBJECTS = 2;
	public GameObject imageObject;
	private bool isOn;
	// Use this for initialization
	void Start () {
		isOn = false; 
		imageObject.SetActive(isOn);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	public void showAndHide(){
		isOn = !isOn;
		imageObject.SetActive(isOn);
	}
}
