using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Menu : MonoBehaviour
{
    public GameObject MenuPrincipal;
    public GameObject MenuPintura;
    public GameObject MenuConstrução;
    public GameObject parent;
    private GameObject menu;
    private bool active = false;

    [ContextMenu("Mostrar Menu")]
    public void ShowMenu()
    {
        if (!active)
        {
            menu = Instantiate<GameObject>(MenuPrincipal);
            menu.transform.SetParent(parent.transform);
            active = true;
        }
    }

    [ContextMenu("Fechar Menu")]
    public void CloseMenu()
    {
        DestroyImmediate(menu);
        active = false;
    }

    [ContextMenu("Menu Principal")]
    public void OpenMenuPrincipal()
    {
        DestroyImmediate(menu);
        active = false;
        if (!active)
        {
            menu = Instantiate(MenuPrincipal, MenuPrincipal.transform);
            menu.transform.SetParent(parent.transform);
            active = true;
        }
    }

    [ContextMenu("Menu Pintura")]
    public void OpenPintura()
    {
        DestroyImmediate(menu);
        active = false;
        if (!active)
        {
            menu = Instantiate(MenuPintura, MenuPrincipal.transform);
            menu.transform.SetParent(parent.transform);
            active = true;
        }
    }

    [ContextMenu("Salvar")]
    public void Save()
    {
        GameObject cenario = new GameObject();
        SaveMethods save = new SaveMethods();
        Scene scene = SceneManager.GetActiveScene();
        List<GameObject> rootObjects = new List<GameObject>();
        scene.GetRootGameObjects(rootObjects);
        for(int i = 0; i < rootObjects.Count; i++)
        {
            if (rootObjects[i].tag == "SceneEditor")
            {
                cenario = rootObjects[i];
            }
        }


        save.SaveProjectFile(GetProjectsPanel.projetoSelecionado.idprojeto, GetProjectsPanel.projetoSelecionado.idusuario, cenario);
        print("foi");
        
        


    }

    [ContextMenu("sair")]
    public void Exit()
    {
        print("saindo");
        SceneManager.LoadScene("MainScene");

    }

    [ContextMenu("Exportar")]
    public void Export()
    {
        print(GetProjectsPanel.projetoSelecionado.idprojeto);
        print(GetProjectsPanel.projetoSelecionado.idusuario);
      

    }
}
