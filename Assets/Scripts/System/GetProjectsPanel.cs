using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GetProjectsPanel : MonoBehaviour
{
    public GameObject projectButtonTemplate;
    public GameObject panel;
    public GameObject xrOrigin;
    public string userid;
    public static Projeto projetoSelecionado;
    public List<Projeto> pjList = new List<Projeto>();


    public List<Projeto> GetList()
    {
        DataBase db = new DataBase();
        return db.GetProjects(userid);
    }
    void Load(int i)
    {
        //xrOrigin.SetActive(false);
        projetoSelecionado = pjList[i];
        SceneLoader.Instance.LoadNewScene(3);
        JoystickManager.SetOperation(Operation.MENU);
        //SceneManager.LoadScene("VRPEditor");
    }
    void Start()
    {
        pjList = GetList();
        GameObject g;
        int x = pjList.Count;
        for (int i = 0; i < x; i++)
        {
            g = Instantiate(projectButtonTemplate, panel.transform);
            g.GetComponentsInChildren<TextMeshProUGUI>()[0].text = pjList[i].titulo;
            g.GetComponentsInChildren<TextMeshProUGUI>()[1].text = pjList[i].dimensao;
            if (pjList[i].referencia_tipo == "")
            {
                g.GetComponentsInChildren<TextMeshProUGUI>()[2].text = "Sem referencia";
            }
            else
            {
                g.GetComponentsInChildren<TextMeshProUGUI>()[2].text = "Com referencia";
            }
            g.GetComponent<Button>().AddEventListener(i, Load);
        }
        Destroy(projectButtonTemplate);
    }
}

public static class ButtonExtension
{
    static Projeto projetoSelecionado;
    public static void AddEventListener<T>(this Button button, T param, Action<T> OnClick)
    {
        button.onClick.AddListener(delegate ()
        { 
            OnClick(param);
        });
        
    }
}