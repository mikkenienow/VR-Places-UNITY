using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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

    public void Save()
    {

    }

    public void Exit()
    {

    }

    public void Export()
    {

    }
}
