using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class Construction : MonoBehaviour
{
    public static Operation op = JoystickManager.op;
    public static SubOperation subOp = SubOperation.CONSTRUIRPAREDE;
    public GameObject parede;
    public GameObject porta;
    public GameObject janela;
    public GameObject pI;
    public GameObject pF;
    Vector3 pf2 = new Vector3();





    static void SetOperation(SubOperation newOp)
    {
        subOp = newOp;
    }

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
        JoystickButtons lTrigger = JoystickManager.jL.jTrigger;
        JoystickButtons rTrigger = JoystickManager.jR.jTrigger;

        if (joystickSide == XRNode.RightHand)
        { //caso seja direito
            if (!rTrigger.SecondAction())
            {
                SetOperation(SubOperation.CONSTRUIRPAREDE);
                JoystickManager.jR.LockAllBut(ButtonName.TRIGGER);

            }
            if (rTrigger.SecondAction())
            {

            }
        } else
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
    void Create()
    {

    }

    void Transform()
    {

    }

    void CreateFrom()
    {

    }


    public static void FinalExecute()
    {
        switch (subOp)
        {
            case SubOperation.CONSTRUIRPAREDE:
                ;
                break;            
            case SubOperation.MODIFICARPAREDE:
                ;
                break;            
            case SubOperation.CONSTRUIRPORTA:
                ;
                break;            
            case SubOperation.MODIFICARPORTA:
                ;
                break;            
            case SubOperation.CONSTRUIRJANELA:
                ;
                break;            
            case SubOperation.MODIFICARJANELA:
                ;
                break;            
            case SubOperation.SELECAO:
                ;
                break;
        }
    }



}
public enum SubOperation
{
    CONSTRUIRPAREDE,
    MODIFICARPAREDE,
    CONSTRUIRPORTA,
    MODIFICARPORTA,
    CONSTRUIRJANELA,
    MODIFICARJANELA,
    SELECAO,
    NULL
}