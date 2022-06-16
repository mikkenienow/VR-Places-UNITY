using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;

public class SaveLoad : MonoBehaviour
{
    public List<SavableObjects> savableObjects = new List<SavableObjects>();
    //SaveSystem randomPlacer;
    SelectionToolLeft randomPlacer;

    void Start()
    {
        randomPlacer = GetComponent<SelectionToolLeft>();
    }

    public void Save()
    {
        Start();
        savableObjects = randomPlacer.savebleObjects;

        FileStream fs = File.Create(Application.persistentDataPath + "/SavableObjects.dat");
        BinaryFormatter bf = new BinaryFormatter();
        bf.Serialize(fs, savableObjects);
        fs.Close();
    }

    public bool Load()
    {
        string path = Application.persistentDataPath + "/SavableObjects.dat";
        if (File.Exists(path))
        {
            FileStream fs = File.Open(path, FileMode.Open);
            BinaryFormatter bf = new BinaryFormatter();
            if (fs.Length > 0)
            {
                savableObjects = (List<SavableObjects>)bf.Deserialize(fs);
                randomPlacer.savebleObjects = savableObjects;
                randomPlacer.Reinstantiate();
                fs.Close();
                return true;
            }
        }
        return false;
    }


}
