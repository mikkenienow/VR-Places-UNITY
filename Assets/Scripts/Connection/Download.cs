using System;
using System.IO;
using System.Net;
using UnityEngine;

public class Download : MonoBehaviour
{
    //[SerializeField] public string urlFile;
    [SerializeField] public string pathOutput;
    //[SerializeField] public string nameFile;
    //[SerializeField] public string formatFile;

    string urlFile = "https://vrplaces.com.br/_files/_referencia/8/referencia.jpg";
    string nameFile = "referencia";
    string formatFile = ".jpg";

    [ContextMenu("StartWork")]
    public void StartDownloadfile()
    {
        print("Setup WebClient");

        WebClient webClient = new WebClient();
        webClient.DownloadDataAsync(new Uri(urlFile));
        webClient.DownloadDataCompleted += DownloadComplete;
    }

    public void DownloadComplete(object sender, DownloadDataCompletedEventArgs e)
    {
        print("Finish download and convert to bytes dor file..");
        string nameFileFinal = string.Concat(nameFile, formatFile);
        print(nameFileFinal);
        //string pathCompleteFile = Path.Combine(pathOutput, nameFileFinal);
        string pathCompleteFile = Path.Combine(Application.persistentDataPath + "/", nameFileFinal);
        print(pathCompleteFile);
        File.WriteAllBytes(pathCompleteFile, e.Result);
    }



}
