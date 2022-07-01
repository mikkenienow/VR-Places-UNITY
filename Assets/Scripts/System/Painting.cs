using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class Painting : MonoBehaviour
{
    Operation op = JoystickManager.GetOperation();



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
