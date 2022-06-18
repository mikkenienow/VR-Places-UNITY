using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotinaDeTeste : MonoBehaviour
{
    public GameObject cenario;
    public GameObject wallPrefab;

    [ContextMenu("acao")]
    void exemplo()
    {

    }

    [ContextMenu("Salvar")]
    void SalvarTeste()
    {
        SaveMethods sm = new SaveMethods();
        sm.SaveProjectFile("1","1", cenario);
    }

    [ContextMenu("Abrir")]
    void AbrirTeste()
    {
        SaveMethods sm = new SaveMethods();
        Projeto pj = new Projeto("1", "1", "TESTE", "", "", "","");
        sm.LoadOnScene(pj, cenario, wallPrefab);
    }

    void Start()
    {
        
    }

    void Update()
    {
        
    }
}