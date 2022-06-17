using MySql.Data.MySqlClient;
using UnityEngine;

public class DataBase : MonoBehaviour
{
    string connSrt = "Server = vrplaces.com.br; Port = 3306; Database = vrplaces_vrplaces; Uid = vrplaces; Pwd = M4c4c0s3d3nt4r10";


    [ContextMenu("Login")]
    public string loginByToken(string token)
    {
        MySqlConnection conn = new MySqlConnection(connSrt);
        string result = "Token inválido";
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
            return "Token inválido";
            throw;
        }
    }


    public User GetUser(string id, string token)
    {
        MySqlConnection conn = new MySqlConnection(connSrt);
        User result = null;
        string Usertoken = token;
        try
        {
            conn.Open();
            string sqlSelect = "SELECT * FROM usuario WHERE idusuario=" + id + ";";

            MySqlCommand cmd = new MySqlCommand(sqlSelect, conn);
            MySqlDataReader reader = cmd.ExecuteReader();

            while (reader.Read())
            {
                string idusuario = reader["idusuario"].ToString();
                string nome = reader["nome"].ToString();
                string sobrenome = reader["sobrenome"].ToString();
                string email = reader["email"].ToString();
                int funcao = (int)reader["funcao"];
                string assinatura = reader["assinatura"].ToString();

                result = new User(idusuario, nome, sobrenome, email, funcao, assinatura, token);
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
