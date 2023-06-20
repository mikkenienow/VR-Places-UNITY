using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Person : MonoBehaviour
{
    static public GameObject person;
    static public GameObject leftHand;
    static public GameObject rightHand;
    static public bool locationStatus = false;
    static public float level = 0;




    public GameObject XROrigin;
    public GameObject XRLeftHand;
    public GameObject XRRightHand;



    static public void SetLevel(float newlevel)
    {
        level = newlevel;
    }

    public void PositionUpdate()
    {
        XROrigin.transform.position = new Vector3(XROrigin.transform.position.x, level, XROrigin.transform.position.z);
    }
    static public void GetTargets()
    {
        if (!locationStatus)
        {
            person = GetPerson();
        }
    }
    static public GameObject GetPerson()
    {
        GameObject notFound = null;
        Scene scene = SceneManager.GetActiveScene();
        List<GameObject> rootObjects = new List<GameObject>();
        scene.GetRootGameObjects(rootObjects);
        for (int i = 0; i < rootObjects.Count; ++i)
        {
            if (rootObjects[i].tag == "Person")
            {
                //print("Achou PERSON");
                Transform[] personObjects = rootObjects[i].GetComponentsInChildren<Transform>();
                //print("Total em PERSON: " + personObjects.Length);
                for (int i2 = 0; i2 < personObjects.Length;  i2++)
                {

                    if (personObjects[i2].tag == "LeftHand")
                    {
                        //print("Achou LEFT");
                        leftHand = personObjects[i2].gameObject;
                    }
                    if (personObjects[i2].tag == "RightHand")
                    {
                        //print("Achou RIGHT");
                        rightHand = personObjects[i2].gameObject;
                    }
                }
                locationStatus = true;
                return rootObjects[i];
            }
            locationStatus = false;
        }
        return notFound;
    }

    public void UpdateTargetPos()
    {
        if (person != null || leftHand != null || rightHand != null)
        {
            person.transform.position = XROrigin.transform.position;
            person.transform.rotation = XROrigin.transform.rotation;

            leftHand.transform.position = XRLeftHand.transform.position;
            leftHand.transform.rotation = XRLeftHand.transform.rotation;

            rightHand.transform.position = XRRightHand.transform.position;
            rightHand.transform.rotation = XRRightHand.transform.rotation;

        }
        
    }



    // Update is called once per frame
    void Update()
    {
        GetTargets();
        UpdateTargetPos();
        PositionUpdate();
    }
}
