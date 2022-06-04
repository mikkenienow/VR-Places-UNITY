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
            
            //Instantiate(bola, primary3DAxysValue, transform.rotation);
            Instantiate(bola, transform.position, transform.rotation);

        }

    }
}
