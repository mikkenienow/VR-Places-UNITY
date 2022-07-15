using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SmoothTransition : MonoBehaviour
{
    public GameObject target;
    public GameObject orientation;
        
    public float smoothSpeed = 0.075f;
    public Vector3 offset;
    private Quaternion angleAdjust = new Quaternion();
    Vector3 finalPosition;

    private void Update()
    {
        finalPosition = transform.position + offset;
    }
    void LateUpdate()
    {
        Quaternion finalRotation = transform.rotation;
        Vector3 smoothTransition = Vector3.Lerp(target.transform.position, finalPosition, smoothSpeed);
        Quaternion smoothRotation = Quaternion.Lerp(target.transform.rotation, finalRotation, smoothSpeed);
        target.transform.position = smoothTransition;
        target.transform.rotation = smoothRotation;

        /*this.transform.LookAt(transform);
        angleAdjust = this.transform.rotation;
        target.transform.rotation = new Quaternion(angleAdjust.x, orientation.transform.rotation.y * -1, angleAdjust.z, angleAdjust.w);*/
    }
}
