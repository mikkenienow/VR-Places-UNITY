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


    public void SaveProjectFile(string idusuario, string idprojeto, GameObject cenario)
    {
        SaveSystem save = CreateVRPFile(cenario);
        BinaryFormatter bf = new BinaryFormatter();
        DirectoryInfo di = Directory.CreateDirectory(Application.persistentDataPath + "/temp/projetos/");
        string filePath = "temp/projetos/" + idprojeto + ".vrp";
        string filePathOut = "/public_html/_files/_projetos/" + idusuario + "/" + idprojeto + ".vrp";
        FileStream fileStream = File.Create(Application.persistentDataPath + "/" + filePath);
        bf.Serialize(fileStream, save);
        fileStream.Close();
        print(Application.persistentDataPath + "/temp/projetos/" + idprojeto + ".vrp");
        
        TransferUp tu = new TransferUp(filePath, filePathOut);
        tu.UploadFile();
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
        BinaryFormatter bf = new BinaryFormatter();
        FileStream fileStream = File.Open(Application.persistentDataPath + "/temp/projetos/" + idprojeto + ".vrp", FileMode.Open);
        SaveSystem saveSystem = (SaveSystem)bf.Deserialize(fileStream);
        fileStream.Close();

        return saveSystem;
    }
}