using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChooseObject : MonoBehaviour {
	const int NUM_OBJECTS = 4;
	public GameObject[] objects = new GameObject[NUM_OBJECTS];
	private bool able;
	// Use this for initialization
	void Start () {
		foreach(GameObject gameObject in objects){
			gameObject.SetActive(false);
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	public void actionOnObjects( int pos ){
		print ("called by" + pos);
		if (!objects[pos].active)
			objects[pos].SetActive(true);
		for (int i = 0; i < NUM_OBJECTS; i++) {
			able = (i == pos);
			objects[i].GetComponent<UnityEngine.XR.iOS.UnityARHitTestExample> ().enabled = able;
			objects[i].GetComponent<Lean.Touch.LeanScale> ().enabled = able;
			objects[i].GetComponent<Lean.Touch.LeanRotate> ().enabled = able;
		}
	}
}
