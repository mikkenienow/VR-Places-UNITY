using System;
using System.IO;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Login : MonoBehaviour
{
    private string token;
    void Start()
    {
        if (File.Exists(Application.persistentDataPath + "/user/userSession.sess"))
        {
            print("existe");
            UserLoginByCookie();
        }
        else
        {
            //manda fazer login
            print("nao existe");
        }
    }

    public void GetToken(TMP_InputField token)
    {
        this.token = token.text;
        print(this.token);
    }

    public void UserLogin(GameObject msgOutput)
    {
        Usuario user;
        try
        {
            print(this.token);
            DataBase db = new DataBase();
            user = db.GetUser(db.loginByToken(this.token), this.token);
            if (user.Status)
            {

                Cookie cookie = new Cookie(user, this.token);
                //SceneManager.LoadScene("MainScene");
                SceneLoader.Instance.LoadNewScene(2);
                msgOutput.GetComponent<TMP_Text>().text = "Deu certo";
                print("Deu certo");
            }
            msgOutput.GetComponent<TMP_Text>().text = user.GetIdusuario();
            print("Token invalido");
        }
        catch (System.Exception e)
        {
            msgOutput.GetComponent<TMP_Text>().text = "Erro: " + e;
            print("Não cadastrado");
        }

    }

    public void UserLoginByCookie()
    {
        DataBase db = new DataBase();
        Cookie cookie = new Cookie();
       
        try
        {
            if (cookie.Authorization)
            {
                //SceneManager.LoadScene("MainScene");
                SceneLoader.Instance.LoadNewScene(2);
                print("token valido");
            }

        }
        catch
        {
            print("token nao confere com o atual");
            print(cookie.User.Token);
        }
    }
}
