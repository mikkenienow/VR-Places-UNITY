using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;
using UnityEngine.SceneManagement;

[System.Serializable]
public class SaveSystem
{
    Scene scene;
    List<VRPfile> listObj = new List<VRPfile>();

    public void SceneObjectsConstructor(Scene scene, List<VRPfile> listObj)
    {
        this.scene = scene;
        this.listObj = listObj;
    }

    public List<VRPfile> GetListObj()
    {
        return this.listObj;
    }
    public Scene GetScene()
    {
        return this.scene;
    }
}
[System.Serializable]
public class SaveMethods : MonoBehaviour
{ 

    private List<VRPfile> CreateVRPFile_OLD()
    {
        List<VRPfile> listaObjetos = new List<VRPfile>();
        List<GameObject> rootObjects = new List<GameObject>();
        Scene scene = SceneManager.GetActiveScene();
        scene.GetRootGameObjects(rootObjects);
        for (int i = 0; i < rootObjects.Count; ++i)
        {
            if (rootObjects[i].tag == "parede")
            {
                //GameObject gameObject = rootObjects[i];
                VRPfile vrpObj = new VRPfile(rootObjects[i].name, rootObjects[i].transform);
                listaObjetos.Add(vrpObj);

            }
        }
        return listaObjetos;
    }


    public void SaveProjectFile(string idprojeto, string idusuario, GameObject cenario)
    {
        SaveSystem save = CreateVRPFile(cenario);
        string fileNameComplete = idprojeto + ".vrp";
        string filePath = "temp/projetos/";
        print(SaveExecute(filePath, fileNameComplete, save));
        string filePathOut = "/public_html/_files/_projetos/" + idusuario + "/" + idprojeto + ".vrp";
        TransferUp tu = new TransferUp(filePath + fileNameComplete, filePathOut);
        tu.UploadFile();
    }

    public string SaveExecute(string filePathLocal, string fileNameComplete, object objToSave)
    {
        BinaryFormatter bf = new BinaryFormatter();
        DirectoryInfo di;
        FileStream fileStream;
        string pathAndName;
        if (!filePathLocal.EndsWith("/"))
        {
            filePathLocal = filePathLocal + "/";
        }
        if (filePathLocal.StartsWith("/")) 
        {
            pathAndName = Application.persistentDataPath + filePathLocal + fileNameComplete;
            di = Directory.CreateDirectory(Application.persistentDataPath + filePathLocal);
            fileStream = File.Create(pathAndName);
            bf.Serialize(fileStream, objToSave);
        } else {
            pathAndName = Application.persistentDataPath + "/" + filePathLocal + fileNameComplete;
            di = Directory.CreateDirectory(Application.persistentDataPath + "/" + filePathLocal);
            fileStream = File.Create(pathAndName);
            bf.Serialize(fileStream, objToSave);
        }
        fileStream.Close();
        return pathAndName;
    }

    public object LoadExecute(string filePathLocal, string fileNameLocal)
    {
        BinaryFormatter bf = new BinaryFormatter();
        FileStream fs;
        object objToLoad;
        string pathAndName;
        if (!filePathLocal.EndsWith("/"))
        {
            filePathLocal = filePathLocal + "/";
        }
        if (filePathLocal.StartsWith("/"))
        {
            pathAndName = Application.persistentDataPath + filePathLocal + fileNameLocal;
            fs = File.Open(pathAndName, FileMode.Open);
        } else
        {
            pathAndName = Application.persistentDataPath + "/" + filePathLocal + fileNameLocal;
            fs = File.Open(pathAndName, FileMode.Open);
        }
        objToLoad = (object)bf.Deserialize(fs);
        fs.Close();
        return objToLoad;
    }


    private SaveSystem CreateVRPFile(GameObject cenario)
    {

        Scene scene = SceneManager.GetActiveScene();
        List<VRPfile> listaObj = new List<VRPfile>();
        Transform[] lista = cenario.transform.GetComponentsInChildren<Transform>();
        for (int i = 0; i < lista.Length; i++)
        {
            if (lista[i].tag == "parede")
            {
                listaObj.Add(new VRPfile(lista[i].tag, lista[i]));
            }
        }
        SaveSystem saveSystem = new SaveSystem();
        saveSystem.SceneObjectsConstructor(scene, listaObj);
        return saveSystem;
    }

    public void LoadOnScene(Projeto projeto, GameObject cenario, GameObject wallPrefab)
    {
        SaveSystem saveSystem = projeto.Projetovrp;

        if (File.Exists(Application.persistentDataPath + "/temp/projetos/" + projeto.Idprojeto + ".vrp"))
        {

            print("Carregando VRPFile na cena");
            print(saveSystem.GetListObj().Count);
            for (int i = 0; i < saveSystem.GetListObj().Count; i++)
            {
                wallPrefab = Instantiate(wallPrefab, saveSystem.GetListObj()[i].GetPosition(), saveSystem.GetListObj()[i].GetRotation(), cenario.transform);
                wallPrefab.transform.localScale = saveSystem.GetListObj()[i].GetScale();
                //wallPrefab.transform.parent = cenario.transform;
            }
            saveSystem.GetListObj().Clear();
        } else
        {
            print("arquivo n encontrado");
        }
    }

    public SaveSystem Load(string idprojeto)
    {
        string filePathLocal = "/temp/projetos/";
        string fileNameLocal = idprojeto + ".vrp";
        SaveSystem saveSystem = (SaveSystem)LoadExecute(filePathLocal, fileNameLocal);
        return saveSystem;
    }
}