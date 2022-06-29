using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class Placebles : MonoBehaviour
{
    Operation op = JoystickManager.op;



    public static void IndexAction(XRNode joystickSide, ButtonName button)
    {
        switch (button)
        {
            case ButtonName.TRIGGER:
                TriggerAction(joystickSide);
                break;
            case ButtonName.GRIP:
                GripAction(joystickSide);
                break;
            case ButtonName.PRIMARYBUTTON:
                PrimaryButtonAction(joystickSide);
                break;
            case ButtonName.SECONDARYBUTTON:
                SecondaryButtonAction(joystickSide);
                break;
        }
    }
    public static void TriggerAction(XRNode joystickSide)
    {
        if (joystickSide == XRNode.RightHand)
        { //caso seja direito

        }
        else
        { //caso seja esquerdo

        }
    }

    public static void GripAction(XRNode joystickSide)
    {
        if (joystickSide == XRNode.RightHand)
        { //caso seja direito

        }
        else
        { //caso seja esquerdo

        }
    }
    public static void PrimaryButtonAction(XRNode joystickSide)
    {
        if (joystickSide == XRNode.RightHand)
        { //caso seja direito

        }
        else
        { //caso seja esquerdo

        }
    }
    public static void SecondaryButtonAction(XRNode joystickSide)
    {
        if (joystickSide == XRNode.RightHand)
        { //caso seja direito

        }
        else
        { //caso seja esquerdo

        }
    }
    public static void FinalExecute()
    {

    }
}
