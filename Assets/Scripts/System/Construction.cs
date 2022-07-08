using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class Construction : MonoBehaviour
{
    public static Operation op = JoystickManager.GetOperation();
    public static SubOperation subOp = SubOperation.NULL;
    public static Joystick jL;
    public static Joystick jR;
    public static GameObject wall;
    public static GameObject door;
    public static GameObject window;
    public static GameObject pI;
    public static GameObject pF;
    public static GameObject cenario;


    Vector3 pF2 = new Vector3();
    public static bool wallExtension = false;
    bool snapSwitch = false;
    public static bool freeAngle = false;
    Vector3 direction = Vector3.forward;
    Vector3 direction2 = new Vector3();

    public static void ObjectReceiver(GameObject obj0, GameObject obj1, GameObject obj2, GameObject obj3, GameObject obj4, GameObject obj5)
    {
        wall = obj0;
        door = obj1;
        window = obj2;
        pI = obj3;
        pF = obj4;
        cenario = obj5;
    }

    public static void JoystickReceiver(Joystick jLOrigin, Joystick jROrigin)
    {
        jL = jLOrigin;
        jR = jROrigin;
    }

    static void SetSubOperation(SubOperation newOp)
    {
        subOp = newOp;
        jR.UnlockAll();
        jL.UnlockAll();
        switch (newOp)
        {
            case SubOperation.WALLCREATION:
                ;
                break;
            case SubOperation.WALLTRANSFORMATION:
                ;
                break;
            case SubOperation.DOORCREATION:
                ;
                break;
            case SubOperation.DOORTRANSFORMATION:
                jR.LockAllButOne(ButtonName.PRIMARYBUTTON);
                jL.LockAll();
                ;
                break;
            case SubOperation.WINDOWCREATION:
                ;
                break;
            case SubOperation.WINDOWTRANSFORMATION:
                jR.LockAllButOne(ButtonName.SECONDARYBUTTON);
                jL.LockAll();
                break;
            case SubOperation.SELECTION:
                ;
                break;
            case SubOperation.NULL:
                ;
                break;
        }
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
        cenario = JoystickManager.GetScene();
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
        print("Ação do trigger");
        if (joystick.xrNode == XRNode.RightHand)
        { //caso seja direito
            if (!joystick.jTrigger.SecondAction())
            {
                print("Ação do trigger: WALLCREATION" );
                SetSubOperation(SubOperation.WALLCREATION);
            } else
            {
                SetSubOperation(SubOperation.NULL);
            }
        } else
        { //caso seja esquerdo

        }
    }

    public static void GripAction(Joystick joystick)
    {
        if (joystick.xrNode == XRNode.RightHand)
        { //caso seja direito
            if (subOp == SubOperation.WALLTRANSFORMATION)
            {
                freeAngle = true;
            }
        }
        else
        { //caso seja esquerdo

        }
    }
    public static void PrimaryButtonAction(Joystick joystick)
    {
        if (joystick.xrNode == XRNode.RightHand)
        { //caso seja direito
            if (!joystick.jPrimaryButton.SecondAction())
            {
                SetSubOperation(SubOperation.DOORCREATION);
            } else
            {
                SetSubOperation(SubOperation.WALLCREATION);
                wallExtension = true;
            }
        }
        else
        { //caso seja esquerdo

        }
    }
    public static void SecondaryButtonAction(Joystick joystick)
    {
        if (joystick.xrNode == XRNode.RightHand)
        { //caso seja direito
            if (!joystick.jSecondaryButton.SecondAction())
            {
                SetSubOperation(SubOperation.WINDOWCREATION);
            }
            else
            {
                SetSubOperation(SubOperation.WALLCREATION);
                wallExtension = true;
            }
                
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
                SetSubOperation(SubOperation.WALLTRANSFORMATION);
                if (wallExtension)
                {
                    print("Criando parede continuada...");
                    pI = Instantiate(pI, pF2, door.transform.rotation);
                    pF = Instantiate(pF, JoystickManager.globalHit.point, new Quaternion(0, 0, 0, 1));
                    wall = Instantiate(wall, pI.transform.position, pI.transform.rotation, cenario.transform);
                    wallExtension = false;
                    //jR.jTrigger.SecondAction();
                }
                else
                {
                    print("criando parede do 0");
                    pI = Instantiate(pI, JoystickManager.globalHit.point, new Quaternion(0, 0, 0, 1));
                    pF = Instantiate(pF, JoystickManager.globalHit.point, new Quaternion(0, 0, 0, 1));
                    wall = Instantiate(wall, pI.transform.position, Quaternion.identity, cenario.transform);
                };
                break;
            case SubOperation.DOORCREATION:
                SetSubOperation(SubOperation.DOORTRANSFORMATION);
                pI = Instantiate(pI, pF2, wall.transform.rotation);
                pF = Instantiate(pF, JoystickManager.globalHit.point, new Quaternion(0, 0, 0, 1));
                door = Instantiate(door, pI.transform.position, wall.transform.rotation, cenario.transform);
                break;
            case SubOperation.WINDOWCREATION:
                SetSubOperation(SubOperation.WINDOWTRANSFORMATION);
                pI = Instantiate(pI, pF2, wall.transform.rotation);
                pF = Instantiate(pF, JoystickManager.globalHit.point, new Quaternion(0, 0, 0, 1));
                window = Instantiate(window, pI.transform.position, wall.transform.rotation, cenario.transform);
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
        }
        float distance = Vector3.Distance(pI.transform.position, pF.transform.position);

        if (freeAngle)
        {
            target.transform.LookAt(pF.transform.position);
        }
        target.transform.localScale = new Vector3(target.transform.localScale.x, target.transform.localScale.y, distance);
        direction2 = target.transform.eulerAngles;
        pF2 = EndPoint(target.transform.position, distance, direction2.y);
        freeAngle = false;
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