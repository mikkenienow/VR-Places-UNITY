using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.XR;
public class SelectionToolRight : MonoBehaviour
{
    [SerializeField]
    public GameObject bola;
    private XRNode xrNodeRight = XRNode.RightHand;

    private List<InputDevice> devices = new List<InputDevice>();

    private InputDevice deviceRight;
    public float range = 20;

    void getDevice()
    {
        InputDevices.GetDevicesAtXRNode(xrNodeRight, devices);
        deviceRight = devices.FirstOrDefault();


    }

    void OnEnable()
    {
        if (!deviceRight.isValid)
        {
            getDevice();
        }
    }


    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (!deviceRight.isValid)
        {
            getDevice();
        }
        
        bool triggerButtonAction = false;

        if (deviceRight.TryGetFeatureValue(CommonUsages.triggerButton, out triggerButtonAction) && triggerButtonAction)
        {
            //print("Trigger on");


            Vector3 direction = Vector3.forward;
            Ray theRay = new Ray(transform.position, transform.TransformDirection(direction * range));
            Debug.DrawRay(transform.position, transform.TransformDirection(direction * range));
            RaycastHit hit;

            if (Physics.Raycast(theRay, out hit, range))
            {
                //print("Hit detectado");
                //print(hit.collider.transform.rotation.eulerAngles.y);
            }
            

        }

        



    }
}
