using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEngine.Events;

public class SceneLoader : Singleton<SceneLoader>
{
    public UnityEvent OnLoadBegin = new UnityEvent();
    public UnityEvent OnLoadEnd = new UnityEvent();
    public ScreenFader screenFader = null;

    private bool isLoading = false;

    private void Awake()
    {
        SceneManager.sceneLoaded += SetActiveScene;
    }
    private void OnDestroy()
    {
        SceneManager.sceneLoaded += SetActiveScene;
    }

    public void LoadNewScene(int sceneNumber)
    {
        if (!isLoading)
        {
            StartCoroutine(LoadScene(sceneNumber));
        }
    }

    private IEnumerator LoadScene(int sceneNumber)
    {
        isLoading = true;

        //OnLoadBegin?.Invoke();
        //yield return screenFader.StartFadeIn();
        yield return StartCoroutine(UnloadCurrent());
        yield return new WaitForSeconds(3.0f);

        yield return StartCoroutine(LoadNew(sceneNumber));
        //yield return screenFader.StartFadeOut();
        //OnLoadEnd?.Invoke();

        isLoading = false;
    }

    private IEnumerator UnloadCurrent()
    {
        int i = 0;
        AsyncOperation unloadOperation = SceneManager.UnloadSceneAsync(SceneManager.GetActiveScene());
        yield return new WaitForSeconds(5.0f);
        /*while (!unloadOperation.isDone)
        {
            print(i);
            i++;
        }*/
        yield return null;
    }

    private IEnumerator LoadNew(int sceneNumber)
    {
        int i = 0;
        AsyncOperation loadOperation = SceneManager.LoadSceneAsync(sceneNumber, LoadSceneMode.Additive);
        yield return new WaitForSeconds(5.0f);
        /*while (!loadOperation.isDone)
        {
            print(i);
            i++;
        }*/
        yield return null;
    }

    private void SetActiveScene(Scene scene, LoadSceneMode mode)
    {
        SceneManager.SetActiveScene(scene);
    }

}
