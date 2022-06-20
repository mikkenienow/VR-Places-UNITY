using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.SceneManagement;

public class RotinaDeTeste : MonoBehaviour
{
    public GameObject cenario;
    public GameObject wallPrefab;
    public GameObject wallpaper;
    public Color color;
    public string colecaoId;
    public string texturaId;
    public GameObject source;
    public GameObject target;

    [ContextMenu("acao")]
    void exemplo()
    {

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
                sm.SaveProjectFile("1", "1",rootObjects[i]);
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
        sm.LoadOnScene(new Projeto("1", "1", "TESTE", "", "", "", ""), Instantiate(cenario, cenario.transform.position, cenario.transform.rotation), wallPrefab);
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
        VRPNewMaterial vrpm = new VRPNewMaterial(wallpaper, file, true, color);

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
        VRPNewMaterial vrpm = new VRPNewMaterial(target, file, true, color);
    }
    void Update()
    {
        
    }
}