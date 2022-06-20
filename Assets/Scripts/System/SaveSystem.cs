using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;
using UnityEngine.Experimental.Rendering;
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
        DirectoryInfo di;
        string pathAndName;
        FileStream fileStream;
        BinaryFormatter bf = new BinaryFormatter();

        di = Directory.CreateDirectory(Application.persistentDataPath + checkPath(filePathLocal, true));
        pathAndName = di + fileNameComplete;
        fileStream = File.Create(pathAndName);
        bf.Serialize(fileStream, objToSave);
        fileStream.Close();

        return pathAndName;
    }

    public object LoadExecute(string filePathLocal, string fileNameLocal)
    {
        string pathAndName;
        FileStream fs;
        object objToLoad;
        BinaryFormatter bf = new BinaryFormatter();

        pathAndName = Application.persistentDataPath + checkPath(filePathLocal, true) + fileNameLocal;
        fs = File.Open(pathAndName, FileMode.Open);
        objToLoad = (object)bf.Deserialize(fs);
        fs.Close();

        return objToLoad;
    }

    private string checkPath(string pathToCheck, bool onlyPath)
    {
        if (!pathToCheck.EndsWith("/") && onlyPath)
        {
            pathToCheck = pathToCheck + "/";
        }
        if (!pathToCheck.StartsWith("/"))
        {
            pathToCheck = "/" + pathToCheck;
        }

        return pathToCheck;
    }
    private SaveSystem CreateVRPFile(GameObject cenario)
    {

        Scene scene = SceneManager.GetActiveScene();
        List<VRPfile> listaObj = new List<VRPfile>();
        GameObject[] lista = cenario.transform.GetComponentsInChildren<GameObject>();
        for (int i = 0; i < lista.Length; i++)
        {
            if (lista[i].tag == "parede")
            {
                listaObj.Add(new VRPfile(lista[i].tag, lista[i].transform));

                List<VRPMaterial> vrpMaterialList = new List<VRPMaterial>();
                GameObject[] wallpapers = lista[i].transform.GetComponentsInChildren<GameObject>();
                for (int i2 = 0; i < wallpapers.Length; i++)
                {
                    Color color = wallpapers[i].GetComponent<Renderer>().material.color;

                    int w = wallpapers[i].GetComponent<Renderer>().material.mainTexture.width;
                    int h = wallpapers[i].GetComponent<Renderer>().material.mainTexture.height;
                    GraphicsFormat format = wallpapers[i].GetComponent<Renderer>().material.mainTexture.graphicsFormat;
                    int mc = wallpapers[i].GetComponent<Renderer>().material.mainTexture.mipmapCount;
                    TextureCreationFlags flags = new TextureCreationFlags();

                    Texture2D texture = new Texture2D(w, h, format, mc, flags);

                    vrpMaterialList.Add(new VRPMaterial(color, texture));
                }



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
        }
        else
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