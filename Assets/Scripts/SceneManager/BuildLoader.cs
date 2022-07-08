using UnityEngine;
using UnityEngine.SceneManagement;

public class BuildLoader : MonoBehaviour
{
    private void Start()
    {
            LoadPersistent();
    }

    private void LoadPersistent()
    {
        SceneManager.LoadSceneAsync("Login", LoadSceneMode.Additive);
    }
}