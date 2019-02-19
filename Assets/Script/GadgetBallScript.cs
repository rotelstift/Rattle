using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GadgetBallScript : MonoBehaviour {

    public float speed = 10.0f;

    // スマホを「振った」動きを検出するための変数定義
    float accelerometerUpdateInterval = 1.0f / 60.0f;
    float lowPassKernelWidthInSeconds = 1.0f;

    // This next parameter is initialized to 2.0 per Apple's recommendation,
    // or at least according to Brady!
    public float shakeDetectionThreshold = 2.0f;

    private float lowPassFilterFactor;
    private Vector3 lowPassValue;
    private Vector3 acceleration;
    private Vector3 deltaAcceleration;

    Rigidbody rb;
    Vector3 force;

	// Use this for initialization
	void Start () {
        
        rb = GetComponent<Rigidbody>();
        force = Vector3.zero;

        shakeDetectionThreshold *= shakeDetectionThreshold;
        lowPassFilterFactor = accelerometerUpdateInterval / lowPassKernelWidthInSeconds;
        lowPassValue = Input.acceleration;
		
	}
	
    private void Update()
    {

        acceleration = Input.acceleration;
        lowPassValue = Vector3.Lerp(lowPassValue, acceleration, lowPassFilterFactor);
        deltaAcceleration = acceleration - lowPassValue;

        if (deltaAcceleration.sqrMagnitude >= shakeDetectionThreshold)
        {

            // Perform your "shaking actions" here, with suitable guards in the if check above, if necessary to not, to not fire again if they're already being performed.
            //iPhoneを振ったときにゲームオブジェクトへさせるアクション
            //Debug.Log("Shake event detected at time " + Time.time);

            rb.AddForce(deltaAcceleration, ForceMode.Impulse);

        }
    }

	// Update is called once per frame
	void FixedUpdate () {
        
        force.x = Input.acceleration.x;
        force.y = Input.acceleration.y;

        force.Normalize();

        // Move object
        rb.AddForce(force * speed, ForceMode.Force);
		
	}
}
