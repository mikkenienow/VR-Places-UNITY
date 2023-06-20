using MySql.Data.MySqlClient;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class DataBase
{
    string connSrt = "Server = vrplaces.com.br; Port = 3306; Database = vrplaces_vrplaces; Uid = vrplaces; Pwd = M4c4c0s3d3nt4r10";


    [ContextMenu("Login")]
    public string loginByToken(string token)
    {
        MySqlConnection conn = new MySqlConnection(connSrt);
        string result = null;
        try
        {
            conn.Open();
            string sqlSelect = "SELECT idusuario FROM token WHERE token='" + token + "' and status = 1;";

            MySqlCommand cmd = new MySqlCommand(sqlSelect, conn);
            MySqlDataReader reader = cmd.ExecuteReader();

            while (reader.Read())
            {
                result = reader["idusuario"].ToString();
            }
            reader.Close();
            return result;
        }
        catch (System.Exception)
        {
            return result;
            throw;
        }
    }


    public Usuario GetUser(string idusuario, string token)
    {
        MySqlConnection conn = new MySqlConnection(connSrt);
        Usuario result = null;
        try
        {
            conn.Open();
            string sqlSelect = "SELECT * FROM usuario WHERE idusuario=" + idusuario + ";";

            MySqlCommand cmd = new MySqlCommand(sqlSelect, conn);
            MySqlDataReader reader = cmd.ExecuteReader();

            while (reader.Read())
            {
                string nome = reader["nome"].ToString();
                string sobrenome = reader["sobrenome"].ToString();
                string email = reader["email"].ToString();
                int funcao = (int)reader["funcao"];
                string assinatura = reader["assinatura"].ToString();

                result = new Usuario(idusuario, nome, sobrenome, email, funcao, assinatura, token);
            }
            reader.Close();
            return result;
        }
        catch (System.Exception)
        {
            return result;
            throw;
        }
    }
    /*
    public List<Projeto> GetProjects(string idusuario)
    {
        MySqlConnection conn = new MySqlConnection(connSrt);
        List<Projeto> result = new List<Projeto>();
        try
        {
            conn.Open();
            string sqlSelect = "SELECT * FROM projeto WHERE idusuario=" + idusuario + ";";

            MySqlCommand cmd = new MySqlCommand(sqlSelect, conn);
            MySqlDataReader reader = cmd.ExecuteReader();

            while (reader.Read())
            {
                string idprojeto = reader["idprojeto"].ToString();
                string idusuarioBD = reader["idusuario"].ToString();
                string titulo = reader["titulo"].ToString();
                string dimensao = reader["dimensao"].ToString();
                string criacao = reader["criacao"].ToString();
                string modificacao = reader["modificacao"].ToString();
                Texture2D referencia_tipo = reader["referencia_tipo"].ToString();

                result.Add(new Projeto(idprojeto, idusuarioBD, titulo, dimensao, criacao, modificacao, referencia_tipo));
            }
            reader.Close();
            return result;
        }
        catch (System.Exception e)
        {
            //Debug.Log("Deu erro" + e);
            return result;
            throw;
        }
    }*/

}

public class BD 
{
    // Start is called before the first frame update
    public static string idUsuario;
    public string nome;
    public string sobrenome;
    public string email;
    public string funcao;
    public string assinatura;
    public static bool logou = false;
    public static Usuario user;
    



    public IEnumerator GetUser(string idusuario, string token)
    {
        //Debug.Log("Procurando id: " + idusuario);

        UnityWebRequest www = UnityWebRequest.Get("https://www.vrplaces.com.br/Unity_database/Gettoken.php?op=login&idusuario=" + idusuario);
        yield return www.SendWebRequest();
        yield return new WaitForSeconds(5);

        if ((www.result == UnityWebRequest.Result.ProtocolError) || (www.result == UnityWebRequest.Result.ConnectionError))
        {
            //Debug.Log("Connection Error!");
        }
        else
        {
            //Debug.Log("Procurando id: " + idusuario);
            //echo $row["nome"]. "-" . $row["sobrenome"] . "-". $row["email"]."-". $row["funcao"] ."-". $row["assinatura"] . "<br>";
            string s = www.downloadHandler.text;
            //Debug.Log("Resultado: " + s);
            nome = s.Split('-')[0];
            sobrenome = s.Split('-')[1];
            email = s.Split('-')[2];
            funcao = s.Split('-')[3];
            assinatura = s.Split('-')[4];

            for (int i = 0; i < s.Split('-').Length; i++)
            {
                //Debug.Log(s.Split('-')[i]);
            }



            user = new Usuario(idUsuario, this.nome, this.sobrenome, this.email, Int32.Parse(this.funcao), assinatura, token);

        }
        
    }




    public IEnumerator loginByToken(string token)
    {
        //Debug.Log("Verificando token");
        UnityWebRequest www = UnityWebRequest.Get("https://www.vrplaces.com.br/Unity_database/Gettoken.php?op=getId&token=" + token);
        yield return www.SendWebRequest();
        yield return new WaitForSeconds(5);
        if ((www.result == UnityWebRequest.Result.ProtocolError) || (www.result == UnityWebRequest.Result.ConnectionError))
        {
            //Debug.Log("Connection Error!");
        }
        else
        {
            string s = www.downloadHandler.text;
            idUsuario = s;
            //Debug.Log("iduser: " + s);

          
        }
        
    }
}


