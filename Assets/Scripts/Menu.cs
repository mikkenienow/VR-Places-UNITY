using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Menu : MonoBehaviour
{

    public GameObject menuPrincipal;
    public GameObject menuPintura;
    public GameObject menuConstrução;
    private static GameObject menu;
    private bool active = false;



    [ContextMenu("Fechar Menu")]
    public void CloseMenu()
    {
        menu.SetActive(false);
        active = false;
    }

    [ContextMenu("Menu Principal")]
    public void OpenmenuPrincipal()
    {
        if (menu)
        {
            menu.SetActive(false);
        }
        active = false;
        if (!active)
        {
            menuPrincipal.SetActive(true);
            active = true;
            menu = menuPrincipal;
        }
    }

    [ContextMenu("Menu Pintura")]
    public void OpenPintura()
    {
        if (menu)
        {
            menu.SetActive(false);
        }
        active = false;
        if (!active)
        {
            menuPintura.SetActive(true);
            menu = menuPintura;
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
        for (int i = 0; i < rootObjects.Count; i++)
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

    public void Confirm()
    {
        JoystickManager.SetOperation(Operation.PAINTING);
        CloseMenu();

    }
}

public class ItensMenuTexture : MonoBehaviour
{




}

public class ItensMenuPlacebles : MonoBehaviour
{




}