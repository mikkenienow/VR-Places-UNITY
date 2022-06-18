using UnityEngine;
using UnityEngine.SceneManagement;

public class Login : MonoBehaviour
{
    private string token;

    public void GetToken(string token)
    {
        this.token = token;
        print(this.token);
    }

    public void UserLogin()
    {
        print(this.token);
        DataBase db = new DataBase();
        Usuario user = db.GetUser(db.loginByToken(this.token), this.token);
        
        if (user.Status)
        {
            SceneManager.LoadScene("MainScene");
        }
        else
        {
            print("Usuário não cadastrado");
        }
    }

}
