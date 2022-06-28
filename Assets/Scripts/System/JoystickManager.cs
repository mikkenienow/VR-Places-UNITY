using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class JoystickManager : MonoBehaviour
{
    Joystick jL = new Joystick(XRNode.LeftHand);
    Joystick jR = new Joystick(XRNode.RightHand);


    void Start()
    {
        print(jL.jGrip.buttonName);
    }
    void ButtonPressedAction()
    {
        IfAction(TempAction, jL.jMenu.bAction, !jL.jMenu.bLock);

        IfAction(TempAction, jL.jTrigger.bAction, !jL.jTrigger.bLock);

        IfAction(TempAction, jL.jGrip.bAction, !jL.jGrip.bLock);

        IfAction(TempAction, jL.jPrimaryButton.bAction, !jL.jPrimaryButton.bLock);

        IfAction(TempAction, jL.jSecondaryButton.bAction, !jL.jSecondaryButton.bLock);

        //Para usar um metodo que retorne condição ELSE, usar o metodo ElIfAction e acrescentar o método 
        // a ser executado em ELSE ño segundo parametro.

        //rigth
        IfAction(TempAction, jR.jMenu.bAction, !jR.jMenu.bLock);

        IfAction(TempAction, jR.jTrigger.bAction, !jR.jTrigger.bLock);

        IfAction(TempAction, jR.jGrip.bAction, !jR.jGrip.bLock);

        IfAction(TempAction, jR.jPrimaryButton.bAction, !jR.jPrimaryButton.bLock);

        IfAction(TempAction, jR.jSecondaryButton.bAction, !jR.jSecondaryButton.bLock);
    }

    void IfAction(Action ifAction, bool firsCondition, bool secondCondition)
    {
        if (firsCondition && secondCondition)
        {
            ifAction();
        }
    }
    void ElIfAction(Action ifAction, Action elseAction, bool firsCondition, bool secondCondition)
    {
        if (firsCondition && secondCondition)
        {
            ifAction();
        } else
        {
            elseAction();
        }
    }

    void TempAction()
    {
        //metodo para substiuir metodos não criados
    }

    void DecreaseButtonDelay()
    {
        jL.DecreaseButtonDelay();
        jR.DecreaseButtonDelay();
    }

    void IsButtonPressed()
    {
        jL.IsButtonPressed();
        jR.IsButtonPressed();
    }
    void Update()
    {
        IsButtonPressed();
        ButtonPressedAction();
        DecreaseButtonDelay();
    }
}

public enum operation
{
    MENU,
    CONTRUCAOPAREDE,
    CONSTRUCAOPORTA,
    CONSTRUCAOJANELA,
    CONSTRUCAOSELECAO,
    PINTURA,
    DECORACAO
}