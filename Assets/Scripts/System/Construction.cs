using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class Construction : MonoBehaviour
{
    public static ConstructionSubOperation subOp = ConstructionSubOperation.NULL;
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

    static void SetSubOperation(ConstructionSubOperation newOp)
    {
        subOp = newOp;
        jR.UnlockAll();
        jL.UnlockAll();
        switch (newOp)
        {
            case ConstructionSubOperation.WALLCREATION:
                ;
                break;
            case ConstructionSubOperation.WALLTRANSFORMATION:
                ;
                break;
            case ConstructionSubOperation.DOORCREATION:
                ;
                break;
            case ConstructionSubOperation.DOORTRANSFORMATION:
                jR.LockAllButOne(ButtonName.PRIMARYBUTTON);
                jL.LockAll();
                ;
                break;
            case ConstructionSubOperation.WINDOWCREATION:
                ;
                break;
            case ConstructionSubOperation.WINDOWTRANSFORMATION:
                jR.LockAllButOne(ButtonName.SECONDARYBUTTON);
                jL.LockAll();
                break;
            case ConstructionSubOperation.SELECTION:
                ;
                break;
            case ConstructionSubOperation.NULL:
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
        print("A��o do trigger");
        if (joystick.xrNode == XRNode.RightHand)
        { //caso seja direito
            if (!joystick.jTrigger.SecondAction())
            {
                print("A��o do trigger: WALLCREATION" );
                SetSubOperation(ConstructionSubOperation.WALLCREATION);
            } else
            {
                SetSubOperation(ConstructionSubOperation.NULL);
            }
        } else
        { //caso seja esquerdo

        }
    }

    public static void GripAction(Joystick joystick)
    {
        if (joystick.xrNode == XRNode.RightHand)
        { //caso seja direito
            if (subOp == ConstructionSubOperation.WALLTRANSFORMATION)
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
                SetSubOperation(ConstructionSubOperation.DOORCREATION);
            } else
            {
                SetSubOperation(ConstructionSubOperation.WALLCREATION);
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
                SetSubOperation(ConstructionSubOperation.WINDOWCREATION);
            }
            else
            {
                SetSubOperation(ConstructionSubOperation.WALLCREATION);
                wallExtension = true;
            }
                
        }
        else
        { //caso seja esquerdo
            
        }
    }
    void Create()
    {
        switch (subOp)
        {
            case ConstructionSubOperation.WALLCREATION:
                SetSubOperation(ConstructionSubOperation.WALLTRANSFORMATION);
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
                    //VRPNewMaterial vrp = new VRPNewMaterial(wall.transform, new VRPMaterial(Color.white, "none/none"), true);
                    print("criando parede do 0");
                    pI = Instantiate(pI, JoystickManager.globalHit.point, new Quaternion(0, 0, 0, 1));
                    pF = Instantiate(pF, JoystickManager.globalHit.point, new Quaternion(0, 0, 0, 1));
                    wall = Instantiate(wall, pI.transform.position, Quaternion.identity, cenario.transform);
                };
                break;
            case ConstructionSubOperation.DOORCREATION:
                SetSubOperation(ConstructionSubOperation.DOORTRANSFORMATION);
                pI = Instantiate(pI, pF2, wall.transform.rotation);
                pF = Instantiate(pF, JoystickManager.globalHit.point, new Quaternion(0, 0, 0, 1));
                door = Instantiate(door, pI.transform.position, wall.transform.rotation, cenario.transform);
                break;
            case ConstructionSubOperation.WINDOWCREATION:
                SetSubOperation(ConstructionSubOperation.WINDOWTRANSFORMATION);
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
    public void FinalExecute()
    {
        switch (subOp)
        {
            case ConstructionSubOperation.WALLCREATION:
                Create();
                break;            
            case ConstructionSubOperation.WALLTRANSFORMATION:
                Transform(wall);
                break;            
            case ConstructionSubOperation.DOORCREATION:
                Create();
                break;            
            case ConstructionSubOperation.DOORTRANSFORMATION:
                Transform(door);
                break;            
            case ConstructionSubOperation.WINDOWCREATION:
                wallExtension = true;
                Create();
                break;            
            case ConstructionSubOperation.WINDOWTRANSFORMATION:
                Transform(window);
                break;            
            case ConstructionSubOperation.SELECTION:
                ;
                break;
        }
    }



}
public enum ConstructionSubOperation
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