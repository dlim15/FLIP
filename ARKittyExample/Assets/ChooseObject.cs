using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChooseObject : MonoBehaviour {
	public GameObject table;
	public GameObject chair;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	public void actionOnDesk(){
		table.GetComponent<UnityEngine.XR.iOS.UnityARHitTestExample> ().enabled = true;
		chair.GetComponent<UnityEngine.XR.iOS.UnityARHitTestExample> ().enabled = false;
	}
	public void actionOnChair(){
		table.GetComponent<UnityEngine.XR.iOS.UnityARHitTestExample> ().enabled = false;
		chair.GetComponent<UnityEngine.XR.iOS.UnityARHitTestExample> ().enabled = true;
	}
}
