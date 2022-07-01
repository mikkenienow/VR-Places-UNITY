using System.Collections;
using System.Collections.Generic;
using System.IO;
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
            if(rootObjects[i].tag == "Limits")
            {
                AdjustScenarioLimits(rootObjects[i], GetProjectsPanel.projetoSelecionado);

            }
        }
        SaveMethods sm = new SaveMethods();
        sm.LoadOnScene(GetProjectsPanel.projetoSelecionado, cenario, parede, baseReferencia);
        if (GetProjectsPanel.projetoSelecionado.GetReferencia() != null)
        {
            LoadBaseReferencia(GetProjectsPanel.projetoSelecionado.GetReferencia());
        }
        print(GetProjectsPanel.projetoSelecionado.titulo);

        //teste
        JoystickManager.SetOperation(Operation.CONSTRUCTION);

    }

    void LoadBaseReferencia(byte[] referencia)
    {
        List<GameObject> rootObjects = new List<GameObject>();
        Scene scene = SceneManager.GetActiveScene();
        scene.GetRootGameObjects(rootObjects);
        for (int i = 0; i < rootObjects.Count; ++i)
        {
            if (rootObjects[i].tag == "SceneEditor")
            {
                Transform[] list = rootObjects[i].GetComponentsInChildren<Transform>();
                for (int i2 = 0; i2 < list.Length; i2++)
                {
                    if(list[i2].tag == "BaseReferencia")
                    {
                        print(rootObjects[i].name);
                        Texture2D texture2 = new Texture2D(1, 1);
                        texture2.LoadImage(referencia);
                        list[i2].GetComponent<Renderer>().material.SetTexture("_MainTex", texture2);
                    }
                }
            }
        }
    }

    void AdjustScenarioLimits(GameObject limits, Projeto projeto)
    {
        limits.transform.localScale = projeto.GetDimensao();
    }
}
