using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR;

public class JoystickManager : MonoBehaviour
{
    public GameObject wall;
    public GameObject door;
    public GameObject window;
    public GameObject pI;
    public GameObject pF;
    static public GameObject cenario;

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
        print("start");
        jL.xrNode = XRNode.LeftHand;
        jL.jGrip.defaultDelay = 0;
        jR.xrNode = XRNode.RightHand;
        jR.jGrip.defaultDelay = 0;
        SetOperation(Operation.MENU);
        ObjectSender();
    }

    public void ObjectSender()
    {
        Construction.ObjectReceiver(wall, door, window, pI, pF, cenario);
        Construction.JoystickReceiver(jL, jR);
    }
    public static GameObject GetScene()
    {
        GameObject cenarioRes = cenario;
        Scene scene = SceneManager.GetActiveScene();
        List<GameObject> rootObjects = new List<GameObject>();
        scene.GetRootGameObjects(rootObjects);
        for (int i = 0; i < rootObjects.Count; ++i)
        {
            if (rootObjects[i].tag == "SceneEditor")
            {
                return rootObjects[i];
            }
        }
        return cenarioRes;
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
        OnEnable();
        RaycastCollision();
        IsButtonPressed();

        ButtonPressedAction();
        if (Physics.Raycast(theRay, out hit, range))
        {
            print("Hiting");
            globalHit = hit;
            print(hit.collider.tag);
            if (hit.collider.tag == "BaseReferencia")
            {
                globalHit.point = new Vector3(globalHit.point.x, 0, globalHit.point.z);

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
                print("Iniciando classe CONSTRUCTION");
                Construction.IndexAction(button, joystick);
                break;
            case Operation.PAINTING:
                Painting.IndexAction(button, joystick);
                break;
            case Operation.PLACEBLES:
                Placebles.IndexAction(button, joystick);
                break;
            case Operation.MENU:
                Placebles.IndexAction(button, joystick);
                break;
        }
    }



    void MenuAction()
    {

    }
}
public enum Operation
{
    MENU = 0,
    CONSTRUCTION = 1,
    PAINTING = 2,
    PLACEBLES = 3
}