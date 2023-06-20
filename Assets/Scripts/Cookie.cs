using System;
using System.IO;
using UnityEngine;

[System.Serializable]
public class Cookie
{
    private Usuario user;
    private string createdAt;
    private string lastAccess;
    private bool authorization;

    public Cookie(Usuario user, string token)
    {
        this.user = user;
        this.createdAt = DateTime.Now.ToString("yyyy/MM/dd");
        this.lastAccess = DateTime.Now.ToString("yyyy/MM/dd HH:mm");
        this.authorization = user.Token.Equals(token);
        this.SaveUserData();
    }
    public Cookie()
    {
        this.LoadUserData();
        //Debug.Log(this.User.Token);
    }



    public Usuario User { get => user; set => user = value; }
    public string CreatedAt { get => createdAt; set => createdAt = value; }
    public string LastAccess { get => lastAccess; set => lastAccess = value; }
    public bool Authorization { get => authorization; set => authorization = value; }

    public void SaveUserData()
    {
        try
        {
            SaveMethods save = new SaveMethods();
            save.SaveExecute("user/", "userSession.sess", this);
        }
        catch (System.Exception e)
        {
            //Debug.Log("Keep user logged failed " + e);
        }
    }

    public Cookie LoadUserData()
    {
        Cookie cookie;
        try
        {
            //Debug.Log("existe mesmo");
            SaveMethods save = new SaveMethods();
            DataBase db = new DataBase();
            cookie = (Cookie)save.LoadExecute("/user/", "userSession.sess");
            
            if (db.loginByToken(cookie.User.Token) != null)
            {
                //Debug.Log("Token confere");
                this.CreatedAt = cookie.CreatedAt;
                this.User = cookie.User;
                this.Authorization = true;
                cookie.LastAccess = DateTime.Now.ToString("yyyy/MM/dd HH:mm");
                //Debug.Log("Data atualizada");
            }
            else
            {
                cookie.Authorization = false;
                this.Authorization = false;
            }
            return cookie;
        }
        catch (System.Exception e)
        {
            //Debug.Log(e);
            return null;
        }
    }
}
