using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlaceableSpace : MonoBehaviour
{
    private GameObject attached;
    public bool changing = true;
    public void SetAttached(GameObject obj)
    {
        attached = obj;
    }
    public GameObject GetAttached()
    {
        GameObject send = attached;
        attached = null;
        return send;
    }
    void Update()
    {
        if (attached != null || changing )
        {
            this.gameObject.layer = 2;
            this.GetComponent<BoxCollider>().enabled = false;
        }
        else
        {
            this.gameObject.layer = 0;
            this.GetComponent<BoxCollider>().enabled = true;
        }
    }
}
