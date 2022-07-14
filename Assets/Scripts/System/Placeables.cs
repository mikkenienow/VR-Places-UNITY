using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class Placeables : MonoBehaviour
{
    public static PlaceableSubOperation subOp = PlaceableSubOperation.NULL;
    public static GameObject selectedPlaceable;
    public static GameObject placeableTarget;

    public static void TargerReceiver(GameObject Target)
    {
        placeableTarget = Target;
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
            if (subOp == PlaceableSubOperation.PLACING)
            {
                if (selectedPlaceable.GetComponent<FRPPFile>().PutOnPlace())
                {
                    subOp = PlaceableSubOperation.SELECTION;
                    FRPPFile.SetLayerRecursively(selectedPlaceable, 0);
                }
            }
        }
        else
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

        }
        else
        { //caso seja esquerdo

        }
    }
    public static void SecondaryButtonAction(Joystick joystick)
    {
        if (joystick.xrNode == XRNode.RightHand)
        { //caso seja direito

        }
        else
        { //caso seja esquerdo

        }
    }
    public void FinalExecute()
    {

    }
}
public enum PlaceableSubOperation
{
    PLACING,
    SELECTION,
    NULL
}