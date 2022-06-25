using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class EditorLoader : MonoBehaviour
{
    public GameObject cenario;
    public GameObject parede;
    public GameObject baseReferencia;
    // Start is called before the first frame update
    void Start()
    {
        print("iniciando projeto");
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
        sm.LoadOnScene(GetProjectsPanel.projetoSelecionado, cenario, parede, baseReferencia);
        print(GetProjectsPanel.projetoSelecionado.titulo);
    }


    void Update()
    {
        
    }
}
