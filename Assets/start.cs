using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.SceneManagement;

public class start : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Download dl = new Download();
        dl.StartDownloadfile();
        ChangeRoof();
    }

    void ChangeRoof()
    {

        print("Iniciando modificador de material");
        List<GameObject> rootObjects = new List<GameObject>();
        Scene scene = SceneManager.GetActiveScene();
        scene.GetRootGameObjects(rootObjects);
        for (int i = 0; i < rootObjects.Count; ++i)
        {
            if (rootObjects[i].tag == "Plane")
            {
                string filepath = Application.persistentDataPath + "/referencia.jpg";
                print("Objeto plane encontrado");
                GameObject gameObject = rootObjects[i];
                Texture texture = rootObjects[i].GetComponent<Renderer>().material.GetTexture("_MainTex");
                print(texture);


                byte[] fileData;
                fileData = File.ReadAllBytes(filepath);
                Texture2D texture2 = new Texture2D(1, 1);
                texture2.LoadImage(fileData);
                rootObjects[i].GetComponent<Renderer>().material.SetTexture("_MainTex", texture2);// mainTexture = (Texture)(Application.persistentDataPath + "/referencia.jpg");
                //rootObjects[i].GetComponent<Renderer>().material.SetTexture(Application.persistentDataPath + "/referencia.jpg", texture); // = ;

            }
        }
    }


}