using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Usuario : MonoBehaviour
{
    private string idusuario;
    private string nome;
    private string sobrenome;
    private string email;
    private int funcao;
    private string assinatura;
    private string token;
    private bool status = false;

    public Usuario(string idusuario, string nome, string sobrenome, string email, int funcao, string assinatura, string token)
    {
        this.idusuario = idusuario;
        this.nome = nome;
        this.sobrenome = sobrenome;
        this.email = email;
        this.funcao = funcao;
        this.assinatura = assinatura;
        this.token = token;
        this.status = true;
    }

    public string GetIdusuario()
    {
        return this.idusuario;
    }
    public string GetNome(){
        return this.nome;
    }

    public string GetSobrenome(){
        return this.sobrenome;
    }

    public string GetEmail()
    {
        return this.email;
    }

    public int Getfuncao()
    {
        return this.funcao;
    }

    public string GetAssinatura()
    {
        return this.assinatura;
    }
    public string GetToken()
    {
        return this.token;
    }

    public bool GetStatus()
    {
        return this.status;
    }
}
