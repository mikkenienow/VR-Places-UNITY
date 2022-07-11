using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class Painting : MonoBehaviour
{
    Operation op = JoystickManager.GetOperation();
    public static PaintingSubOperation subOp = PaintingSubOperation.NULL;
    public static Joystick jL;
    public static Joystick jR;
    public static GameObject wallpaperTarget;
    public static VRPMaterial paintSet = new VRPMaterial(Color.white, "none/none");
    public static bool protection = false;


    public static void TargerReceiver(GameObject Target)
    {
        wallpaperTarget = Target;
    }
    public static void PaintSetUpdate()
    {
        if (ItensMenuPainting.selectedColor != paintSet.GetColor())
        {
            paintSet = new VRPMaterial(ItensMenuPainting.selectedColor, paintSet.GetMainTexture());
        }
        if (ItensMenuTexture.selectedtexture != paintSet.GetMainTexture())
        {
            paintSet = new VRPMaterial(paintSet.GetColor(), ItensMenuTexture.selectedtexture);
        }
        
    }
    public static void VoidTrigger()
    {
        jL.SetButtonDelay();
        jR.SetButtonDelay();
    }
    public static void JoystickReceiver(Joystick jLOrigin, Joystick jROrigin)
    {
        jL = jLOrigin;
        jR = jROrigin;
    }
    public static void SetSubOperation(PaintingSubOperation newOp)
    {
        subOp = newOp;
        jR.UnlockAll();
        jL.UnlockAll();
        switch (newOp)
        {
            case PaintingSubOperation.WALLPAINTING:
                ;
                break;
            case PaintingSubOperation.SELECTION:
                ;
                break;
            case PaintingSubOperation.MATERIALPICKING:
                ;
                break;
            case PaintingSubOperation.NULL:
                ;
                break;
        }
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
            SetSubOperation(PaintingSubOperation.WALLPAINTING);
        }
        else
        { //caso seja esquerdo

        }
    }

    public void Paint()
    {
        print("Pintando");
        PaintSetUpdate();
        VRPNewMaterial paint = new VRPNewMaterial(wallpaperTarget.transform, paintSet, true);
        SetSubOperation(PaintingSubOperation.NULL);
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
        switch (subOp)
        {
            case PaintingSubOperation.WALLPAINTING:
                Paint();
                break;
            case PaintingSubOperation.SELECTION:
                ;
                break;
        }
    }

}
public enum PaintingSubOperation
{
    WALLPAINTING,
    MATERIALPICKING,
    SELECTION,
    NULL
}