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
    public GameObject target;

    private Joystick jL = new Joystick();
    private Joystick jR = new Joystick();
    private static Operation op;
    private static Operation lastOp = Operation.CONSTRUCTION;
    public RaycastHit hit;
    public static string targetTag = "";
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
        Painting.JoystickReceiver(jL, jR);
    }

    static public void LayersUpdate(string newLayer)
    {
        Transform[] objectsFromLayer = GetScene().GetComponentsInChildren<Transform>();
        for (int i = 0; i < objectsFromLayer.Length; i++)
        {
            if (objectsFromLayer[i].tag == "parede" || objectsFromLayer[i].tag == "wallpaper")
            {
                objectsFromLayer[i].gameObject.layer = LayerMask.NameToLayer(newLayer);
            }
        }
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
        switch (newOp)
        {
            case Operation.CONSTRUCTION:
                targetTag = "BaseReferencia";
                LayersUpdate("Ignore Raycast");
                break;
            case Operation.PAINTING:
                targetTag = "wallpaper";
                LayersUpdate("Default");
                break;
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
        switch (op)
        {
            case Operation.CONSTRUCTION:
                construction.FinalExecute();
                break;
            case Operation.PAINTING:
                SelectTarget(targetTag);
                painting.FinalExecute();
                break;
            case Operation.PLACEBLES:
                placebles.FinalExecute();
                break;
        }
        
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
    void SelectTarget(string targetTag)
    {
        if (hit.collider.tag == targetTag)
        {
            target = hit.transform.gameObject;
            Painting.TargerReceiver(target);
        }
    }
    void Update()
    {
        OnEnable();
        RaycastCollision();
        IsButtonPressed();

        
        if (Physics.Raycast(theRay, out hit, range))
        {
            print("Hiting");
            globalHit = hit;
            print(hit.collider.tag);
            if (hit.collider.tag == targetTag) // BaseReferencia
            {
                ButtonPressedAction();
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