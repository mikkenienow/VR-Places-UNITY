using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class JoystickManager : MonoBehaviour
{
    public GameObject wall;
    public GameObject door;
    public GameObject window;
    public GameObject pI;
    public GameObject pF;


    private Joystick jL = new Joystick();
    
    private Joystick jR = new Joystick();
    private static Operation op;
    private static Operation lastOp = Operation.CONSTRUCTION;
    public RaycastHit hit;
    public static RaycastHit globalHit;
    Ray theRay;
    Vector3 direction = Vector3.forward;
    float range = 50;
    Construction construction = new Construction();
    Placebles placebles = new Placebles();
    Painting painting = new Painting();


    public void Start()
    {
        jL.xrNode = XRNode.LeftHand;
        jR.xrNode = XRNode.RightHand;
        SetOperation(Operation.CONSTRUCTION);
        ObjectSender();
    }

    public void ObjectSender()
    {
        Construction.ObjectReceiver(wall, door, window, pI, pF);
    }
    public static void SetOperation(Operation newOp)
    {
        if (newOp != Operation.MENU)
        {
            lastOp = op;
        }
        op = newOp;
    }

    public static Operation GetOperation()
    {
        return op;
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
                print("Operação atual: " + op);
                jR.SetButtonDelay();
                print("Botão pressionado: " + jR.GetButtons()[i].buttonName);
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
        print("Operação atual: " + op);
        OnEnable();
        RaycastCollision();
        IsButtonPressed();
        ButtonPressedAction();

        if (Physics.Raycast(theRay, out hit, range))
        {
            globalHit = hit;
            print("hiting");
            if (hit.collider.tag == "BaseReferencia")
            {
                print("colidendo em SceneEditor");
                SuperExecute();
            } 
        }
        print("Botão decreasing");
        DecreaseButtonDelay();
    }

    //methodos por botão

    void ButtonCallAction(ButtonName button, Joystick joystick)
    {
        switch (op)
        {
            case Operation.CONSTRUCTION:
                print("Iniciando classe CONSTRUCTION");
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
    MENU = 0,
    CONSTRUCTION = 1,
    PAINTING = 2,
    PLACEBLES = 3
}