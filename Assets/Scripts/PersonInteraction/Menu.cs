using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Menu : MonoBehaviour
{

    public GameObject menuPrincipal;
    public GameObject menuPintura;
    public GameObject menuTexture;
    public GameObject menuPlaceable;
    public GameObject player;
    public GameObject menuPosition;
    private static GameObject menu;
    private bool active = false;


    private void RecenterMenu()
    {
        Person.SetLevel(7);
        //menuPosition.transform.position = new Vector3(menuPosition.transform.position.x, menuPosition.transform.position.y, menuPosition.transform.position.z + 10);
        menu.transform.position = menuPosition.transform.position;
        menu.transform.rotation = menuPosition.transform.rotation;
        menu.transform.position = new Vector3(menu.transform.position.x, 8, menu.transform.position.z);
    }
    [ContextMenu("Fechar Menu")]
    public void CloseMenu()
    {
        menu.SetActive(false);
        active = false;
        Person.SetLevel(0);
    }

    [ContextMenu("Menu Principal")]
    public void OpenMenuPrincipal()
    {
        if (active && menu == menuPrincipal)
        {
            CloseMenu();
        } else
        {
            if (menu)
            {
                menu.SetActive(false);
                active = false;
            }
            if (!active)
            {
                menuPrincipal.SetActive(true);
                menu = menuPrincipal;
                RecenterMenu();
                active = true;
            }
        }
        
    }

    public void MenuCallAction()
    {
        if (active)
        {
            CloseMenu();
        }
        else
        {
            OpenMenuPrincipal();
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
        if (menu == menuPrincipal)
        {
            JoystickManager.SetOperation(Operation.CONSTRUCTION);
        }


        CloseMenu();

    }
}
