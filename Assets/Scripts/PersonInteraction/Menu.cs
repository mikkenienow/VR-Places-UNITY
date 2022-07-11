using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Menu : MonoBehaviour
{

    public GameObject menuPrincipal;
    public GameObject menuPintura;
    public GameObject menuTexture;
    public GameObject menuPlaceable;    
    public GameObject subMenu;    
    public GameObject subMenuButtons;    

    public GameObject modeConstruction;    
    public GameObject modePainting;    
    public GameObject modePlacebles;

    public Material selected;
    public Material deselected;
    public Operation operation;


    public GameObject staticMenuPosition;
    private static GameObject staticMenu;
    private bool active = false;


    private void RecenterMenu()
    {
        Person.SetLevel(7);
        staticMenu.transform.position = staticMenuPosition.transform.position;
        staticMenu.transform.rotation = staticMenuPosition.transform.rotation;
        staticMenu.transform.position = new Vector3(staticMenu.transform.position.x, 8, staticMenu.transform.position.z);
    }

    public void CloseMenu()
    {
        staticMenu.SetActive(false);
        active = false;
        Person.SetLevel(0);
    }
    public void ChangeOperationMenu(int i)
    {
        switch (i)
        {
            case 0:
                ChangeOperation(Operation.MENU);
                break;
            case 1:
                ChangeOperation(Operation.CONSTRUCTION);
                break;
            case 2:
                ChangeOperation(Operation.PAINTING);
                break;
            case 3:
                ChangeOperation(Operation.PLACEBLES);
                break;
        }
    }
    public void ChangeOperation(Operation op)
    {
        ButtonsStateUpdate(op);
        HideSubMenu(true);
        switch (op)
        {
            case Operation.MENU:
                ;
                break;
            case Operation.CONSTRUCTION:
                JoystickManager.SetOperation(op);
                ;
                break;
            case Operation.PAINTING:
                JoystickManager.SetOperation(op);
                Painting.SetSubOperation(PaintingSubOperation.NULL);
                Painting.VoidTrigger();
                ;
                break;
            case Operation.PLACEBLES:
                JoystickManager.SetOperation(op);
                ;
                break;
                
        }
    }
    public void HideSubMenu(bool hide)
    {
        subMenu.SetActive(!hide);
        subMenuButtons.SetActive(!hide);
    }
    public void SetOperation(int i)
    {

    }
    public void ButtonsStateUpdate(Operation op)
    {
        if (op == Operation.MENU) 
        {
            modeConstruction.GetComponent<Renderer>().material.color = deselected.color;
            modePainting.GetComponent<Renderer>().material.color = deselected.color;
            modePlacebles.GetComponent<Renderer>().material.color = deselected.color;
        }
        if (op == Operation.CONSTRUCTION) 
        {
            modeConstruction.GetComponent<Renderer>().material.color = selected.color;
            modePainting.GetComponent<Renderer>().material.color = deselected.color;
            modePlacebles.GetComponent<Renderer>().material.color = deselected.color;
        }
        if (op == Operation.PAINTING) 
        {
            modeConstruction.GetComponent<Renderer>().material.color = deselected.color;
            modePainting.GetComponent<Renderer>().material.color = selected.color;
            modePlacebles.GetComponent<Renderer>().material.color = deselected.color;
        }
        if (op == Operation.PLACEBLES) 
        {
            modeConstruction.GetComponent<Renderer>().material.color = deselected.color;
            modePainting.GetComponent<Renderer>().material.color = deselected.color;
            modePlacebles.GetComponent<Renderer>().material.color = selected.color;
        }
            
      

    }


    public void OpenMenuPrincipal()
    {
        JoystickManager.SetOperation(Operation.MENU);
        if (active && staticMenu == menuPrincipal)
        {
            CloseMenu();
        } else
        {
            if (staticMenu)
            {
                staticMenu.SetActive(false);
                active = false;
            }
            if (!active)
            {
                menuPrincipal.SetActive(true);
                staticMenu = menuPrincipal;
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
            HideSubMenu(true);
        }

    }



    public void OpenMenuPintura()
    {
        if (active && staticMenu == menuPintura)
        {
            CloseMenu();
        }
        else
        {
            if (staticMenu)
            {
                staticMenu.SetActive(false);
                active = false;
            }
            if (!active)
            {
                menuPintura.SetActive(true);
                staticMenu = menuPintura;
                RecenterMenu();
                active = true;
            } 
        }

    }

    public void OpenMenuTexture()
    {
        if (active && staticMenu == menuTexture)
        {
            CloseMenu();
        }
        else
        {
            if (staticMenu)
            {
                staticMenu.SetActive(false);
                active = false;
            }
            if (!active)
            {
                menuTexture.SetActive(true);
                staticMenu = menuTexture;
                RecenterMenu();
                active = true;
            }
        }
        
    }


    public void OpenMenuPlaceable()
    {
        if (active && staticMenu == menuPlaceable)
        {
            CloseMenu();
        }
        else
        {
            if (staticMenu)
            {
                staticMenu.SetActive(false);
                active = false;
            }
            
            if (!active)
            {
                menuPlaceable.SetActive(true);
                staticMenu = menuPlaceable;
                RecenterMenu();
                active = true;
            }
        }

        
    }

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

    public void Exit()
    {
        print("saindo");
        SceneManager.LoadScene("MainScene");

    }

    public void Export()
    {
        print(GetProjectsPanel.projetoSelecionado.idprojeto);
        print(GetProjectsPanel.projetoSelecionado.idusuario);
    }

    public void Confirm()
    {

        if (staticMenu == menuPintura || staticMenu == menuTexture)
        {
            ChangeOperation(Operation.PAINTING);
        }
        if (staticMenu == menuPlaceable) 
        {
            ChangeOperation(Operation.PLACEBLES);
        }
        if (staticMenu == menuPrincipal)
        {
            ChangeOperation(Operation.CONSTRUCTION);
        }
        CloseMenu();

    }
}
