using System.Collections;
using System.Collections.Generic;
using MySql.Data.MySqlClient;
using UnityEngine;

public class DataBase : MonoBehaviour
{
    string connSrt = "Server = vrplaces.com.br; Port = 3306; Database = vrplaces_vrplaces; Uid = vrplaces; Pwd = M4c4c0s3d3nt4r10";


    [ContextMenu("Login")]
    public void login(string token)
    {
        MySqlConnection conn = new MySqlConnection(connSrt);
        try
        {
            conn.Open();
            string sqlSelect = "SELECT idusuario FROM token WHERE token='" + token + "';";

            MySqlCommand cmd = new MySqlCommand(sqlSelect, conn);
            MySqlDataReader reader = cmd.ExecuteReader();

            reader.Read();
            int cont = 0;
            while (reader.Read())
            {
                string projeto = reader[cont].ToString();
                cont += 1;
                print(projeto);
            }

            string resultado = reader.GetString(0);
            reader.Close();
            print(resultado);
        }
        catch (System.Exception e)
        {
            print("Token inválido");
            throw;
        }
    }

}
