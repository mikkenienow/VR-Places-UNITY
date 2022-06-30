using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class Construction : MonoBehaviour
{
    public static Operation op = JoystickManager.op;
    public static SubOperation subOp = SubOperation.WALLCREATION;
    public GameObject wall;
    public GameObject door;
    public GameObject window;
    public GameObject pI;
    public GameObject pF;
    Vector3 pF2 = new Vector3();
    bool wallExtension = false;
    bool snapSwitch = false;
    bool freeAngle = false;
    Vector3 direction = Vector3.forward;
    Vector3 direction2 = new Vector3();


    static void SetOperation(SubOperation newOp)
    {
        subOp = newOp;
    }
    Vector3 Snap(Vector3 originalPosition)
    {
        Vector3 result = originalPosition;
        if (snapSwitch)
        {
            float granularity = 0.15f;
            Vector3 snappedPosition = new Vector3(Mathf.Floor(originalPosition.x / granularity) * granularity, originalPosition.y, Mathf.Floor(originalPosition.z / granularity) * granularity);
            result = snappedPosition;
        }
        return result;
    }
    Vector3 EndPoint(Vector3 currentPosition, float distance, float angle)
    {
        var x = distance * Mathf.Sin(angle * Mathf.Deg2Rad);
        var z = distance * Mathf.Cos(angle * Mathf.Deg2Rad);
        Vector3 newPosition = currentPosition;
        newPosition.x += x;
        newPosition.z += z;

        return newPosition;
    }
    public static void IndexAction(ButtonName button, Joystick joystick)
    {

        switch (button)
        {
            case ButtonName.TRIGGER:
                TriggerAction(joystick);
                break;
            case ButtonName.GRIP:
                GripAction(joystick);
                break;
            case ButtonName.PRIMARYBUTTON:
                PrimaryButtonAction(joystick);
                break;
            case ButtonName.SECONDARYBUTTON:
                SecondaryButtonAction(joystick);
                break;
        }
    }
    public static void TriggerAction(Joystick joystick)
    {
        if (joystick.xrNode == XRNode.RightHand)
        { //caso seja direito
            if (!joystick.jTrigger.SecondAction())
            {
                SetOperation(SubOperation.WALLCREATION);
            }
            if (joystick.jTrigger.SecondAction())
            {
                SetOperation(SubOperation.NULL);
            }
        } else
        { //caso seja esquerdo

        }
    }

    public static void GripAction(Joystick joystick)
    {
        if (joystick.xrNode == XRNode.RightHand)
        { //caso seja direito

        }
        else
        { //caso seja esquerdo

        }
    }
    public static void PrimaryButtonAction(Joystick joystick)
    {
        if (joystick.xrNode == XRNode.RightHand)
        { //caso seja direito
            SetOperation(SubOperation.DOORCREATION);
        }
        else
        { //caso seja esquerdo

        }
    }
    public static void SecondaryButtonAction(Joystick joystick)
    {
        if (joystick.xrNode == XRNode.RightHand)
        { //caso seja direito
            SetOperation(SubOperation.WINDOWCREATION);
        }
        else
        { //caso seja esquerdo

        }
    }
    void Create(Joystick jL, Joystick jR)
    {
        switch (subOp)
        {
            case SubOperation.WALLCREATION:
                subOp = SubOperation.WALLTRANSFORMATION;
                if (wallExtension)
                {
                    print("Criando parede continuada...");
                    this.pI = Instantiate(this.pI, this.pF2, this.door.transform.rotation);
                    this.pF = Instantiate(this.pF, JoystickManager.hit.point, new Quaternion(0, 0, 0, 1));
                    this.wall = Instantiate(this.wall, this.pI.transform.position, this.pI.transform.rotation);
                    this.wallExtension = false;
                    jR.jTrigger.SecondAction();
                }
                else
                {
                    print("criando parede do 0");
                    this.pI = Instantiate(this.pI, JoystickManager.hit.point, new Quaternion(0, 0, 0, 1));
                    this.pF = Instantiate(this.pF, JoystickManager.hit.point, new Quaternion(0, 0, 0, 1));
                    this.wall = Instantiate(this.wall, this.pI.transform.position, Quaternion.identity);
                };
                break;
            case SubOperation.DOORCREATION:
                subOp = SubOperation.DOORTRANSFORMATION;
                this.pI = Instantiate(this.pI, this.pF2, this.wall.transform.rotation);
                this.pF = Instantiate(this.pF, JoystickManager.hit.point, new Quaternion(0, 0, 0, 1));
                this.door = Instantiate(this.door, this.pI.transform.position, this.wall.transform.rotation);
                break;
            case SubOperation.WINDOWCREATION:
                subOp = SubOperation.WINDOWTRANSFORMATION;
                this.pI = Instantiate(this.pI, this.pF2, this.wall.transform.rotation);
                this.pF = Instantiate(this.pF, JoystickManager.hit.point, new Quaternion(0, 0, 0, 1));
                this.window = Instantiate(this.window, this.pI.transform.position, this.wall.transform.rotation);
                ;
                break;
        }
    }

    void Transform(GameObject target)
    {
        pF.transform.position = Snap(JoystickManager.hit.point);
        ;
        if (freeAngle)
        {
            pI.transform.LookAt(pF.transform.position);
            pF.transform.LookAt(pI.transform.position);
            freeAngle = false;
        }
        float distance = Vector3.Distance(pI.transform.position, pF.transform.position);

        if (freeAngle)
        {
            target.transform.LookAt(pF.transform.position);
            freeAngle = false;
        }
        target.transform.localScale = new Vector3(target.transform.localScale.x, target.transform.localScale.y, distance);
        direction2 = target.transform.eulerAngles;
        pF2 = EndPoint(target.transform.position, distance, direction2.y);
    }
    public void FinalExecute(Joystick jL, Joystick jR)
    {
        switch (subOp)
        {
            case SubOperation.WALLCREATION:
                Create(jL, jR);
                break;            
            case SubOperation.WALLTRANSFORMATION:
                Transform(this.wall);
                break;            
            case SubOperation.DOORCREATION:
                wallExtension = true;
                Create(jL, jR);
                break;            
            case SubOperation.DOORTRANSFORMATION:
                Transform(this.door);
                break;            
            case SubOperation.WINDOWCREATION:
                wallExtension = true;
                Create(jL, jR);
                break;            
            case SubOperation.WINDOWTRANSFORMATION:
                Transform(this.window);
                break;            
            case SubOperation.SELECTION:
                ;
                break;
        }
    }



}
public enum SubOperation
{
    WALLCREATION,
    WALLTRANSFORMATION,
    DOORCREATION,
    DOORTRANSFORMATION,
    WINDOWCREATION,
    WINDOWTRANSFORMATION,
    SELECTION,
    NULL
}