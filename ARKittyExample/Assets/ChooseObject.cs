using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChooseObject : MonoBehaviour {
	const int NUM_OBJECTS = 4;
	public GameObject[] objects = new GameObject[NUM_OBJECTS];
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	public void actionOnObjects( int pos ){
		print ("called by" + pos);
//		if (!objects[pos].active)
//			objects[pos].SetActive(true);
		for (int i = 0; i < NUM_OBJECTS; i++) {
			objects[i].GetComponent<UnityEngine.XR.iOS.UnityARHitTestExample> ().enabled = (i == pos);
		}
	}
}
