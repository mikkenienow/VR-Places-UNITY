using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class JoystickManager : MonoBehaviour
{
    private Joystick jL = new Joystick();
    
    private Joystick jR = new Joystick();
    public static Operation op = Operation.MENU;
    public static Operation lastOp = Operation.CONSTRUCTION;
    public static RaycastHit hit;
    Ray theRay;
    Vector3 direction = Vector3.forward;
    float range = 50;
    Construction construction = new Construction();
    Placebles placebles = new Placebles();
    Painting painting = new Painting();


    void Start()
    {
        print("Iniciando controles");
        jL.xrNode = XRNode.LeftHand;
        jR.xrNode = XRNode.RightHand;
    }


    static void SetOperation(Operation newOp)
    {
        if (newOp != Operation.MENU)
        {
            lastOp = op;
        }
        op = newOp;
    }

    void ButtonPressedAction()
    {
        for (int i = 0; i < 5; i++)
        {
            if (jL.GetButtons()[i].IsActive() && !jL.GetButtons()[i].IsLocked() && jL.GetButtons()[i].DelayInactive())
            {
                jL.SetButtonDelay();
                ButtonCallAction(jL.GetButtons()[i].buttonName, jL);
            }
            if (jR.GetButtons()[i].IsActive() && !jR.GetButtons()[i].IsLocked() && jR.GetButtons()[i].DelayInactive())
            {
                jR.SetButtonDelay();
                ButtonCallAction(jR.GetButtons()[i].buttonName, jR);
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
        jL.SetButtonActive();
        jR.SetButtonActive();
    }

    void SuperExecute()
    {
        construction.FinalExecute(jL, jR);
        placebles.FinalExecute();
        painting.FinalExecute();
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
        print("Ativando controles");
        OnEnable();
        RaycastCollision();
        IsButtonPressed();
        print("testando botões apertados");
        ButtonPressedAction();

        if (Physics.Raycast(theRay, out hit, range))
        {
            if (hit.collider.tag == "SceneEditor")
            {
                SuperExecute();
            } 
        } 
        DecreaseButtonDelay();
    }

    //methodos por botão

    void ButtonCallAction(ButtonName button, Joystick joystick)
    {
        switch (op)
        {        
            case Operation.CONSTRUCTION:
                Construction.IndexAction(button, joystick);
                break;                      
            case Operation.PAINTING:
                Painting.IndexAction(button, joystick);
                break;            
            case Operation.PLACEBLES:
                Placebles.IndexAction(button, joystick);
                break;
        }
    }
}

public enum Operation
{
    MENU,
    CONSTRUCTION,
    PAINTING,
    PLACEBLES
}