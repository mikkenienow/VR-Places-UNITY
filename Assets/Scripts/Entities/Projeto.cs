using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;
using UnityEngine;

public class Projeto
{
    public string idprojeto;
    public string idusuario;
    public string titulo;
    public string dimensao;
    public string criacao;
    public string modificacao;
    public Texture2D referencia_tipo;
    public SaveSystem projetovrp;

    public Projeto(string idprojeto, string idusuario, string titulo, string dimensao, string criacao, string modificacao, Texture2D referencia_tipo)
    {
        this.idprojeto = idprojeto;
        this.idusuario = idusuario;
        this.titulo = titulo;
        this.dimensao = dimensao;
        this.criacao = criacao;
        this.modificacao = modificacao;
        this.referencia_tipo = referencia_tipo;
        this.projetovrp = GetProjetoVRP();
        
        //precisamos tratar a string de data para se comportar como data
    }
    public Vector3 GetDimensao()
    {
        string[] origin = dimensao.Split('x');
        float[] size = new float[2];
        Single.TryParse(origin[0],out size[0]);
        Single.TryParse(origin[1],out size[1]);
        //Debug.Log(size[0]);
        //Debug.Log(size[1]);
        return new Vector3(size[0], 1, size[1]);
    }
    public SaveSystem GetProjetoVRP()
    {   // File.Exists(Application.persistentDataPath
        string fileOrigin = "/temp/projetos/" + this.idprojeto + ".vrp";
        if (File.Exists(Application.persistentDataPath + fileOrigin))
        {
           
            //TransferDown td = new TransferDown("/temp/projetos/", this.idprojeto, ".vrp", fileOrigin);
            SaveMethods sm = new SaveMethods();           
            SaveSystem projetoVRP = sm.Load(this.idprojeto);

            return projetoVRP;
        } else
        {
            //Debug.Log("Arquivo não localizado");
        }
        return new SaveSystem();
    }

    public Texture2D GetReferencia() // return original byte[]
    {

        //byte[] referencia = referencia_tipo. GetRawTextureData();



        /*
        byte[] referencia = null;
        string fileOrigin = "https://vrplaces.com.br/_files/_referencia/" + this.idprojeto + "/" + this.referencia_tipo;
        if (TransferDown.URLExists(fileOrigin))
        {
            string[] ext = referencia_tipo.Split(".");
            ext[1] = "." + ext[1];
            TransferDown td = new TransferDown("/temp/_referencia/", this.idprojeto, ext[1], fileOrigin);
            SaveMethods sm = new SaveMethods();
            referencia = File.ReadAllBytes(Application.persistentDataPath + "/temp/_referencia/" + this.idprojeto + ext[1]);

            return referencia;
        }
        else
        {
            //Debug.Log("Arquivo não localizado");
        }*/
        return referencia_tipo;
    }
}
