using System;
using System.IO;
using System.Net;
using UnityEngine;

public class Download : MonoBehaviour
{

    [SerializeField] private string urlFile;
    [SerializeField] private string pathOutput;
    [SerializeField] private string nameFile;
    [SerializeField] private string formatFile;

    [ContextMenu("StartWork")]
    private void StartDownloadfile()
    {
        print("Setup WebClient");

        WebClient webClient = new WebClient();
        webClient.DownloadDataAsync(new Uri(urlFile));
        webClient.DownloadDataCompleted += DownloadComplete;
    }

    private void DownloadComplete(object sender, DownloadDataCompletedEventArgs e)
    {
        print("Finish download and convert to bytes dor file..");
        string nameFileFinal = string.Concat(nameFile, formatFile);
        print(nameFileFinal);

        string pathCompleteFile = Path.Combine(pathOutput, nameFileFinal);

        File.WriteAllBytes(pathCompleteFile, e.Result);

    }

}
