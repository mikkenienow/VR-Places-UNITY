using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class Construction : MonoBehaviour
{
    public static Operation op = JoystickManager.GetOperation();
    public static SubOperation subOp = SubOperation.WALLCREATION;
    public static GameObject wall;
    public static GameObject door;
    public static GameObject window;
    public static GameObject pI;
    public static GameObject pF;
    Vector3 pF2 = new Vector3();
    bool wallExtension = false;
    bool snapSwitch = false;
    bool freeAngle = false;
    Vector3 direction = Vector3.forward;
    Vector3 direction2 = new Vector3();

    public static void ObjectReceiver(GameObject obj0, GameObject obj1, GameObject obj2, GameObject obj3, GameObject obj4)
    {
        wall = obj0;
        door = obj1;
        window = obj2;
        pI = obj3;
        pF = obj4;
    }
    static void SetOperation(SubOperation newOp)
    {
        subOp = newOp;
        print("Sub operação: " + subOp);
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
        print("IndexAction ---");
        print("Suboperação: " + subOp);
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
        print("TriggerAction ---");
        if (joystick.xrNode == XRNode.RightHand)
        { //caso seja direito
            print("Trigger direito");
            if (!joystick.jTrigger.SecondAction())
            {
                print("Definindo subOp para WALLCREATION");
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
                    pI = Instantiate(pI, pF2, door.transform.rotation);
                    pF = Instantiate(pF, JoystickManager.globalHit.point, new Quaternion(0, 0, 0, 1));
                    wall = Instantiate(wall, pI.transform.position, pI.transform.rotation);
                    this.wallExtension = false;
                    jR.jTrigger.SecondAction();
                }
                else
                {
                    print("criando parede do 0");
                    pI = Instantiate(pI, JoystickManager.globalHit.point, new Quaternion(0, 0, 0, 1));
                    pF = Instantiate(pF, JoystickManager.globalHit.point, new Quaternion(0, 0, 0, 1));
                    wall = Instantiate(wall, pI.transform.position, Quaternion.identity);
                };
                break;
            case SubOperation.DOORCREATION:
                subOp = SubOperation.DOORTRANSFORMATION;
                pI = Instantiate(pI, pF2, wall.transform.rotation);
                pF = Instantiate(pF, JoystickManager.globalHit.point, new Quaternion(0, 0, 0, 1));
                door = Instantiate(door, pI.transform.position, wall.transform.rotation);
                break;
            case SubOperation.WINDOWCREATION:
                subOp = SubOperation.WINDOWTRANSFORMATION;
                pI = Instantiate(pI, pF2, wall.transform.rotation);
                pF = Instantiate(pF, JoystickManager.globalHit.point, new Quaternion(0, 0, 0, 1));
                window = Instantiate(window, pI.transform.position, wall.transform.rotation);
                ;
                break;
        }
    }

    void Transform(GameObject target)
    {
        pF.transform.position = Snap(JoystickManager.globalHit.point);
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
                Transform(wall);
                break;            
            case SubOperation.DOORCREATION:
                wallExtension = true;
                Create(jL, jR);
                break;            
            case SubOperation.DOORTRANSFORMATION:
                Transform(door);
                break;            
            case SubOperation.WINDOWCREATION:
                wallExtension = true;
                Create(jL, jR);
                break;            
            case SubOperation.WINDOWTRANSFORMATION:
                Transform(window);
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