using MySql.Data.MySqlClient;
using System.Collections.Generic;
using UnityEngine;

public class DataBase : MonoBehaviour
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
                print(result);
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

    public List<Projeto> GetProjects(string idusuario)
    {
        MySqlConnection conn = new MySqlConnection(connSrt);
        List<Projeto> result = null;
        try
        {
            conn.Open();
            string sqlSelect = "SELECT * FROM projeto WHERE idusuario=" + idusuario + ";";

            MySqlCommand cmd = new MySqlCommand(sqlSelect, conn);
            MySqlDataReader reader = cmd.ExecuteReader();

            while (reader.Read())
            {
                string idprojeto = reader["idprojeto"].ToString();
                string titulo = reader["titulo"].ToString();
                string dimensao = reader["dimensao"].ToString();
                string criacao = reader["criacao"].ToString();
                string modificacao = reader["modificacao"].ToString();
                string referencia_tipo = reader["referencia_tipo"].ToString();

                result.Add(new Projeto(idprojeto, idusuario, titulo, dimensao, criacao, modificacao, referencia_tipo));
                print(result);
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

}
