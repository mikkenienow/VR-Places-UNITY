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
        this.Idusuario = idusuario;
        this.Nome = nome;
        this.Sobrenome = sobrenome;
        this.Email = email;
        this.Funcao = funcao;
        this.Assinatura = assinatura;
        this.Token = token;
        this.Status = true;
    }

    public string GetIdusuario()
    {
        return this.Idusuario;
    }
    public string GetNome(){
        return this.Nome;
    }

    public string GetSobrenome(){
        return this.Sobrenome;
    }

    public string Idusuario { get => idusuario; set => idusuario = value; }
    public string Nome { get => nome; set => nome = value; }
    public string Sobrenome { get => sobrenome; set => sobrenome = value; }
    public string Email { get => email; set => email = value; }
    public int Funcao { get => funcao; set => funcao = value; }
    public string Assinatura { get => assinatura; set => assinatura = value; }
    public string Token { get => token; set => token = value; }
    public bool Status { get => status; set => status = value; }

}
