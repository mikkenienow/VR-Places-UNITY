using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class RotinaDeTeste : MonoBehaviour
{
    public GameObject cenario;
    public GameObject wallPrefab;

    [ContextMenu("acao")]
    void exemplo()
    {

    }

    [ContextMenu("Salvar")]
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

    [ContextMenu("Abrir")]
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


        //Instantiate(cenario, cenario.transform.position, cenario.transform.rotation);

        SaveMethods sm = new SaveMethods();
        sm.LoadOnScene(new Projeto("1", "1", "TESTE", "", "", "", ""), Instantiate(cenario, cenario.transform.position, cenario.transform.rotation), wallPrefab);
    }

    void Start()
    {
        
    }

    void Update()
    {
        
    }
}