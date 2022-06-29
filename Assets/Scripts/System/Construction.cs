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
    Vector3 pF2 = new Vector3();
    bool finish = true;
    bool wallExtension = false;





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
            }
            if (rTrigger.SecondAction())
            {
                SetOperation(SubOperation.NULL);
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
        finish = false;
        switch (subOp)
        {
            case SubOperation.CONSTRUIRPAREDE:
                subOp = SubOperation.MODIFICARPAREDE;
                if (wallExtension)
                {
                    print("Criando parede continuada...");
                    pI = Instantiate(pI, pF2, porta.transform.rotation);
                    pF = Instantiate(pF, JoystickManager.hit.point, new Quaternion(0, 0, 0, 1));
                    parede = Instantiate(parede, pI.transform.position, pI.transform.rotation);
                    wallExtension = false;
                    JoystickManager.jR.jTrigger.SecondAction();
                }
                else
                {
                    print("criando parede do 0");
                    pI = Instantiate(pI, JoystickManager.hit.point, new Quaternion(0, 0, 0, 1));
                    pF = Instantiate(pF, JoystickManager.hit.point, new Quaternion(0, 0, 0, 1));
                    parede = Instantiate(parede, pI.transform.position, Quaternion.identity);
                };
                break;
            case SubOperation.CONSTRUIRPORTA:
                ;
                break;
            case SubOperation.CONSTRUIRJANELA:
                ;
                break;
        }

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