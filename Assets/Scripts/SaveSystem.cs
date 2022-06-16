using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SaveSystem : MonoBehaviour
{
    public int randomToPlace;
    public Identification[] placebleObjects;

    public List<SavableObjects> savebleObjects = new List<SavableObjects>();

    SaveLoad saveLoad;

    Transform parent;


    public void Start()
    {
        saveLoad = GetComponent<SaveLoad>();

        if (saveLoad.Load() == false)
        {
            parent = Instantiate(new GameObject("parent")).transform;

            for (int i=0; i < randomToPlace; i++)
            {
                int rand = Random.Range(9, placebleObjects.Length);
                Vector3 randomPos = new Vector3(Random.Range(-50, 50), 1, Random.Range(-50, 50));
                GameObject obj = Instantiate(placebleObjects[rand].prefab);
                obj.transform.position = randomPos;
                obj.transform.parent = parent;

                savebleObjects.Add(new SavableObjects(savebleObjects[rand].id, obj.transform.position, obj.transform.rotation));
                saveLoad.Save();
            }
        }
    }

    public void Reinstantiate()
    {
        for(int i = 0; i < savebleObjects.Count; i++)
        {
            for(int z = 0; z < placebleObjects.Length; z++)
            {
                if(savebleObjects[i].id == placebleObjects[z].id)
                {
                    GameObject obj = Instantiate(placebleObjects[z].prefab);
                    obj.transform.position = savebleObjects[i].ReturnPosition();
                    obj.transform.rotation = savebleObjects[i].ReturnRotation();
                    obj.transform.parent = parent;

                }
            }
        }
    }

}

[System.Serializable]
public class SavableObjects
{
    public string id;
    public float px, py, pz;
    public float rx, ry, rz, rw;

    public SavableObjects(string id, Vector3 position, Quaternion rotation)
    {
        this.id = id;

        px = position.x;
        py = position.y;
        pz = position.z;

        rx = rotation.x;
        ry = rotation.y;
        rz = rotation.z;
        rw = rotation.w;
    }

    public Vector3 ReturnPosition()
    {
        Vector3 pos = new Vector3(px, py, pz);
        return pos;
    }
    public Quaternion ReturnRotation()
    {
        Quaternion rot = new Quaternion(rx, ry, rz, rw);
        return rot;
    }

}
[System.Serializable] 
public class Identification
{
    public string id;
    public GameObject prefab;
}