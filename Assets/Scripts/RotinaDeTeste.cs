using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Net;
using UnityEngine;
using UnityEngine.SceneManagement;

public class RotinaDeTeste : MonoBehaviour
{
    public GameObject cenario;
    public GameObject wallPrefab;
    public GameObject wallpaper;
    public Color color;
    public Material material;
    public string colecaoId;
    public string texturaId;
    public GameObject source;
    public GameObject target;

    [ContextMenu("acao")]
    void exemplo()
    {

    }
    [ContextMenu("Listar objetos")]
    void ListarObjetos()
    {

        Scene scene = SceneManager.GetActiveScene();
        List<GameObject> rootObjects = new List<GameObject>();
        scene.GetRootGameObjects(rootObjects);
        for (int i = 0; i < rootObjects.Count; ++i)
        {
            if (rootObjects[i].tag == "SceneEditor")
            {
                Transform[] lista = rootObjects[i].transform.GetComponentsInChildren<Transform>();
                //print(lista.Length);
                for (int i2 = 0; i2 < lista.Length; i2++)
                {
                    //print(i2);
                    //print(lista[i2].name);
                    if (lista[i2].tag == "parede")
                    {
                        Transform[] lista2 = lista[i2].transform.GetComponentsInChildren<Transform>();

                        for (int i3 = 0; i3 < lista2.Length; i3++)
                        {
                            if (lista2[i3].tag == "wallpaper")
                            {
                                print(lista2[i3].name);
                            }
                            
                        }



                    }




                }
            }
        }
    }
    [ContextMenu("Criar pasta")]
    void CriarPastaNoServer()
    {
        string pathToCreate = Autentication.FtpHostUpload + "/public_html/_files/_projetos/projeto";

        WebRequest request = WebRequest.Create(pathToCreate);
        request.Method = WebRequestMethods.Ftp.MakeDirectory;
        request.Credentials = new NetworkCredential(Autentication.FtpUserName, Autentication.FtpPassword);
        using (var resp = (FtpWebResponse)request.GetResponse())
        {
            print(resp.StatusCode);
        }

    }

    [ContextMenu("Salvar 01")]
    void SalvarTeste()
    {
        SaveMethods sm = new SaveMethods();
        Scene scene = SceneManager.GetActiveScene();
        List<GameObject> rootObjects = new List<GameObject>();
        scene.GetRootGameObjects(rootObjects);
        for (int i = 0; i < rootObjects.Count; ++i)
        {
            if (rootObjects[i].tag == "SceneEditor")
            {
                sm.SaveProjectFile("5", "2",rootObjects[i]);
            }
        }
    }

    [ContextMenu("Salvar 02")]
    void SalvarTeste2()
    {
        SaveMethods sm = new SaveMethods();
        Scene scene = SceneManager.GetActiveScene();
        List<GameObject> rootObjects = new List<GameObject>();
        scene.GetRootGameObjects(rootObjects);
        for (int i = 0; i < rootObjects.Count; ++i)
        {
            if (rootObjects[i].tag == "SceneEditor")
            {
                sm.SaveProjectFile("2", "1", rootObjects[i]);
            }
        }
    }

    [ContextMenu("Abrir 01")]
    void AbrirTeste()
    {
        Scene scene = SceneManager.GetActiveScene();
        List<GameObject> rootObjects = new List<GameObject>();
        scene.GetRootGameObjects(rootObjects);
        for (int i = 0; i < rootObjects.Count; ++i)
        {
            if (rootObjects[i].tag == "SceneEditor")
            {
                Object.Destroy(rootObjects[i]);

            }
        }
        SaveMethods sm = new SaveMethods();
        sm.LoadOnScene(new Projeto("5", "2", "TESTE", "", "", "", ""), Instantiate(cenario, cenario.transform.position, cenario.transform.rotation), wallPrefab);
    }
    [ContextMenu("Abrir 02")]
    void AbrirTeste2()
    {
        Scene scene = SceneManager.GetActiveScene();
        List<GameObject> rootObjects = new List<GameObject>();
        scene.GetRootGameObjects(rootObjects);
        for (int i = 0; i < rootObjects.Count; ++i)
        {
            if (rootObjects[i].tag == "SceneEditor")
            {
                Object.Destroy(rootObjects[i]);

            }
        }
        SaveMethods sm = new SaveMethods();
        sm.LoadOnScene(new Projeto("2", "1", "TESTE", "", "", "", ""), Instantiate(cenario, cenario.transform.position, cenario.transform.rotation), wallPrefab);
    }

    [ContextMenu("Teste de conceito")]
    void TesteDeConceito()
    {
        string file = Application.persistentDataPath + "/temp/_materials/" + colecaoId + "/" + texturaId + ".jpg";
        
        Renderer rend = wallpaper.GetComponent<Renderer>();
        rend.enabled = true;
        rend.sharedMaterial = this.material;

        VRPMaterial material = new VRPMaterial(color, "none/none");
        VRPNewMaterial vrpm = new VRPNewMaterial(wallpaper.transform, material, true);

    }
    [ContextMenu("_____")]
    void Start() { }
    [ContextMenu("Trocar cores")]
    void troca()
    {
        string name = source.GetComponent<Renderer>().material.mainTexture.name;
        Color color = source.GetComponent<Renderer>().material.color;
        string colecaoId = name.Split("/")[0];
        string texturaId = name.Split("/")[1];
        print(colecaoId);
        print(texturaId);
        string file = Application.persistentDataPath + "/temp/_materials/" + colecaoId + "/" + texturaId + ".jpg";
        //VRPNewMaterial vrpm = new VRPNewMaterial(target, file, true, color);
    }
    void Update()
    {
        
    }
}