using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Login : MonoBehaviour
{
    private string token;

    public void getToken(string token)
    {
        this.token = token;
        Debug.Log(token);
    }

    public void login()
    {
        DataBase db = new DataBase();
        Debug.Log(this.token);
        db.login(this.token);

    }

}
