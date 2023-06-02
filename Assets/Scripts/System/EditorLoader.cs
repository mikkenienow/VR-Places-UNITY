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

        JoystickManager.cenario = this.cenario;
        Scene scene = SceneManager.GetActiveScene();
        List<GameObject> rootObjects = new List<GameObject>();
        scene.GetRootGameObjects(rootObjects);
        for (int i = 0; i < rootObjects.Count; ++i)
        {
            if (rootObjects[i].tag == "SceneEditor")
            {
                Object.Destroy(rootObjects[i]);
            }
            if (rootObjects[i].tag == "Limits")
            {
                AdjustScenarioLimits(rootObjects[i], GetProjectsPanel.projetoSelecionado);
            }
        }
        SaveMethods sm = new SaveMethods();
        sm.LoadOnScene(GetProjectsPanel.projetoSelecionado, cenario, parede, baseReferencia);
        if (GetProjectsPanel.projetoSelecionado.GetReferencia() != null)
        {
            print("Carregando refefrrencia");
            LoadBaseReferencia(GetProjectsPanel.projetoSelecionado.GetReferencia());
            //teste
        }
        print(GetProjectsPanel.projetoSelecionado.titulo);
        //SceneManager.UnloadSceneAsync("MainScene");
    }

    void LoadBaseReferencia(Texture2D referencia) // parametro original byte[]
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
                        texture2 = referencia;
                        list[i2].GetComponent<Renderer>().material.SetTexture("_MainTex", texture2);
                    }
                }
            }
        }
    }

    void AdjustScenarioLimits(GameObject limits, Projeto projeto)
    {
        Vector3 newscale = projeto.GetDimensao();
        newscale = new Vector3(newscale.x / 5, 1, newscale.z / 5);
        limits.transform.localScale = newscale;
    }
}
