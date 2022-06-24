using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class GetProjectsPanel : MonoBehaviour
{
    public GameObject projectButtonTemplate;
    public GameObject panel;
    public string userid;
    static Projeto projetoSelecionado;

    void Start()
    {
        DataBase db = new DataBase();
        List<Projeto> pjList =  db.GetProjects(userid);

        GameObject g;
        int x = pjList.Count;
        for (int i = 0; i < x; i++)
        {   
            g = Instantiate(projectButtonTemplate, panel.transform);
            g.GetComponentsInChildren<TextMeshProUGUI>()[0].text = "Titulo " + i;

            g.GetComponent<Button>().onClick.AddListener(delegate ()
            {
                //projetoSelecionado = new Projeto();

            });

        }
        Destroy(projectButtonTemplate);
    }

}
