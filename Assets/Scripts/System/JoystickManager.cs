using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class JoystickManager : MonoBehaviour
{
    public static Joystick jL = new Joystick(XRNode.LeftHand);
    public static Joystick jR = new Joystick(XRNode.RightHand);
    public static Operation op = Operation.MENU;
    public static Operation lastOp = Operation.CONTRUCAOPAREDE;
    public static RaycastHit hit;
    Ray theRay;
    Vector3 direction = Vector3.forward;
    float range = 20;

    static void SetOperation(Operation newOp)
    {
        if (newOp != Operation.MENU)
        {
            lastOp = op;
        }
        op = newOp;
    }
    void Start()
    {
        print(jL.jGrip.buttonName);
    }
    void ButtonPressedAction()
    {
        for (int i = 0; i < 5; i++)
        {
            if (jL.GetButtons()[i].bAction && !jL.GetButtons()[i].bLock && jL.GetButtons()[i].DelayInactive())
            {
                ButtonCallAction(XRNode.LeftHand, jL.GetButtons()[i].buttonName);
            }
            if (jR.GetButtons()[i].bAction && !jR.GetButtons()[i].bLock && jR.GetButtons()[i].DelayInactive())
            {
                ButtonCallAction(XRNode.RightHand, jR.GetButtons()[i].buttonName);
            }
        }
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

    void SuperExecute()
    {
        Construction.FinalExecute();
        Placebles.FinalExecute();
        Painting.FinalExecute();
    }
    void RaycastCollision()
    {
        theRay = new Ray(transform.position, transform.TransformDirection(direction * range));
        Debug.DrawRay(transform.position, transform.TransformDirection(direction * range));
    }
    void OnEnable()
    {
        jL.OnEnable();
        jR.OnEnable();
    }

    void Update()
    {   
        OnEnable();
        RaycastCollision();
        IsButtonPressed();
        ButtonPressedAction();

        if (Physics.Raycast(theRay, out hit, range))
        {
            SuperExecute(); 
        }
            
        DecreaseButtonDelay();
    }

    //methodos por botão

    void ButtonCallAction(XRNode joystickSide, ButtonName button)
    {
        switch (op)
        {        
            case Operation.CONTRUCAOPAREDE:
                Construction.IndexAction(joystickSide, button);
                break;                      
            case Operation.PINTURA:
                Painting.IndexAction(joystickSide, button);
                break;            
            case Operation.DECORACAO:
                Placebles.IndexAction(joystickSide, button);
                break;
        }
    }
}

public enum Operation
{
    MENU,
    CONTRUCAOPAREDE,
    PINTURA,
    DECORACAO
}