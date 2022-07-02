using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Menu : MonoBehaviour
{
    public GameObject MenuPrincipal;
    public GameObject MenuPintura;
    public GameObject MenuConstru��o;
    public GameObject parent;
    private GameObject menu;
    private bool active = false;

    [ContextMenu("Mostrar Menu")]
    public void ShowMenu()
    {
        if (!active)
        {
            MenuPrincipal.SetActive(true);
            menu = MenuPrincipal;
            menu.transform.SetParent(parent.transform);
            active = true;
        }
    }

    [ContextMenu("Fechar Menu")]
    public void CloseMenu()
    {
        MenuPrincipal.SetActive(false);
        active = false;
    }

    [ContextMenu("Menu Principal")]
    public void OpenMenuPrincipal()
    {

        MenuPrincipal.SetActive(false);
        active = false;
        if (!active)
        {
            MenuPrincipal.SetActive(true);
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

        ItensMenuPainting painting = new ItensMenuPainting();
        Color colors = painting.color;

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