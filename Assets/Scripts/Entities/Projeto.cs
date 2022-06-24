using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;
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
        this.Idprojeto = idprojeto;
        this.Idusuario = idusuario;
        this.Titulo = titulo;
        this.Dimensao = dimensao;
        this.Criacao = criacao;
        this.Modificacao = modificacao;
        this.Referencia_tipo = referencia_tipo;
        this.Projetovrp = GetProjetoVRP();
        //precisamos tratar a string de data para se comportar como data
    }

    public string Idprojeto { get => idprojeto; set => idprojeto = value; }
    public string Idusuario { get => idusuario; set => idusuario = value; }
    public string Titulo { get => titulo; set => titulo = value; }
    public string Dimensao { get => dimensao; set => dimensao = value; }
    public string Criacao { get => criacao; set => criacao = value; }
    public string Modificacao { get => modificacao; set => modificacao = value; }
    public string Referencia_tipo { get => referencia_tipo; set => referencia_tipo = value; }
    public SaveSystem Projetovrp { get => projetovrp; set => projetovrp = value; }

    public SaveSystem GetProjetoVRP()
    {
        string fileOrigin = "https://vrplaces.com.br/_files/_projetos/" + Idusuario + "/" + Idprojeto + ".vrp";
        if (TransferDown.URLExists(fileOrigin))
        {
            print("Arquivo localizado");
            TransferDown td = new TransferDown("/temp/projetos/", Idprojeto, ".vrp", fileOrigin);
            SaveMethods sm = new SaveMethods();           
            SaveSystem projetoVRP = sm.Load(Idprojeto);
            return projetoVRP;
        } else
        {
            print("Arquivo não localizado");
        }
        return new SaveSystem();
    }


}
