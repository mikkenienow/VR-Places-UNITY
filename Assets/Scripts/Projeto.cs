using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Threading;
using UnityEngine;

public class Projeto : MonoBehaviour
{
    private string idprojeto;
    private string idusuario;
    private string titulo;
    private string dimensao;
    private string criacao;
    private string modificacao;
    private string referencia_tipo;
    private SaveSystem projetovrp;

    public Projeto(string idprojeto, string idusuario, string titulo, string dimensao, string criacao, string modificacao, string referencia_tipo)
    {
        this.idprojeto = idprojeto;
        this.idusuario = idusuario;
        this.titulo = titulo;
        this.dimensao = dimensao;
        this.criacao = criacao;
        this.modificacao = modificacao;
        this.referencia_tipo = referencia_tipo;
        this.projetovrp = GetProjetoVRP();
    }

    public string GetIdprojeto()
    {
        return this.idprojeto;
    }
    public void SetIdprojeto(string idprojeto)
    {
        this.idprojeto = idprojeto;
    }

    public SaveSystem GetProjetoVRP()
    {
        string fileOrigin = "https://vrplaces.com.br/_files/_projetos/" + idusuario + "/" + idprojeto + ".vrp";
        if (TransferDown.URLExists(fileOrigin))
        {
            print("Arquivo localizado");
            TransferDown td = new TransferDown("/temp/projetos/", idprojeto, ".vrp", fileOrigin);
            SaveMethods sm = new SaveMethods();
            //arquivo lê antes de baixar
            
            SaveSystem projetoVRP = sm.Load(idprojeto);
            return projetoVRP;
        } else
        {
            print("Arquivo não localizado");
        }
        return new SaveSystem();
    }


}
