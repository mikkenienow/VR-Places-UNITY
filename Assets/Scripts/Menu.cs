using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Menu : MonoBehaviour
{

    public GameObject menuPrincipal;
    public GameObject menuPintura;
    public GameObject menuConstrução;
    public GameObject menuTexture;
    public GameObject menuPlaceable;
    public GameObject player;
    private static GameObject menu;
    private bool active = false;


    private void RecenterMenu()
    {
        Vector3 playerPosition = player.transform.position;
        player.transform.position = new Vector3(playerPosition.x, 120, playerPosition.z);
        playerPosition = player.transform.position;
        menu.transform.position = new Vector3(playerPosition.x, playerPosition.y, playerPosition.z + 40);
    }
    [ContextMenu("Fechar Menu")]
    public void CloseMenu()
    {
        menu.SetActive(false);
        active = false;
    }

    [ContextMenu("Menu Principal")]
    public void OpenMenuPrincipal()
    {
        if (menu)
        {
            menu.SetActive(false);
        }
        active = false;
        if (!active)
        {
            menuPrincipal.SetActive(true);
            menu = menuPrincipal;
            RecenterMenu();
            active = true;
        }
    }

    [ContextMenu("Menu Pintura")]
    public void OpenMenuPintura()
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
            RecenterMenu();
            active = true;
        } 
    }

    public void OpenMenuTexture()
    {
        if (menu)
        {
            menu.SetActive(false);
        }
        active = false;
        if (!active)
        {
            menuTexture.SetActive(true);
            menu = menuTexture;
            RecenterMenu();
            active = true;
        }
    }

    [ContextMenu("Menu Placeable")]
    public void OpenMenuPlaceable()
    {
        if (menu)
        {
            RecenterMenu();
            menu.SetActive(false);
            print("aqui2222");
        }
        active = false;
        if (!active)
        {
            print("aqui333333");
            menuPlaceable.SetActive(true);
            menu = menuPlaceable;
            RecenterMenu();
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
        if (menu == menuPintura || menu == menuTexture)
        {
            JoystickManager.SetOperation(Operation.PAINTING);
        }
        if (menu == menuPlaceable) 
        {
            JoystickManager.SetOperation(Operation.PLACEBLES);
        }
        if (menu == menuTexture)
        {
            JoystickManager.SetOperation(Operation.PAINTING);
        }
        if (menu == menuConstrução)
        {
            JoystickManager.SetOperation(Operation.CONSTRUCTION);
        }


        CloseMenu();

    }
}
