using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Net;
using UnityEngine;

public class Transfer : MonoBehaviour
{
    
}

public class TransferDown : MonoBehaviour
{
    private string pathOutput;
    private string nameFile;
    private string formatFile;
    private string urlFileOrigin;

    public TransferDown(string pathOutput, string nameFile, string formatFile, string urlFileOrigin)
    {
        this.pathOutput = Application.persistentDataPath + pathOutput;
        this.nameFile = nameFile;
        this.formatFile = formatFile;
        this.urlFileOrigin = urlFileOrigin;
        StartDownloadfile();
    }

    public void StartDownloadfile()
    {
        WebClient webClient = new WebClient();
        webClient.DownloadDataAsync(new Uri(urlFileOrigin));
        webClient.DownloadDataCompleted += DownloadComplete;
    }

    public void DownloadComplete(object sender, DownloadDataCompletedEventArgs e)
    {
        DirectoryInfo di = Directory.CreateDirectory(Application.persistentDataPath + "/temp/projetos/");
        string nameFileFinal = string.Concat(nameFile, formatFile);
        string pathCompleteFile = Path.Combine(pathOutput, nameFileFinal);
        File.WriteAllBytes(pathCompleteFile, e.Result);

        if (File.Exists(Application.persistentDataPath + "/temp/projetos/" + nameFile + ".vrp"))
        {
            print("Arquivo criado");
        }
    }

    static public bool URLExists(string url)
    {
        bool result = false;

        WebRequest webRequest = WebRequest.Create(url);
        webRequest.Timeout = 1200; // miliseconds
        webRequest.Method = "HEAD";

        HttpWebResponse response = null;

        try
        {
            response = (HttpWebResponse)webRequest.GetResponse();
            result = true;
        }
        catch (WebException webException)
        {
            Debug.Log(url + " Não encontrado: " + webException.Message);
        }
        finally
        {
            if (response != null)
            {
                response.Close();
            }
        }

        return result;
    }


}

public class TransferUp : MonoBehaviour
{
    public string ftpHostUpload = "ftp://vrplaces.com.br";

    public string ftpUserName = "vrplaces";

    public string ftpPassword = "M4c4c0s3d3nt4r10";

    public string filePathOrigin;

    public string filePathOut;

    public TransferUp(string filePathOrigin, string filePathOut)
    {
        this.filePathOrigin = Application.persistentDataPath + "/" + filePathOrigin;
        this.filePathOut = filePathOut;
    }

    public void UploadFile()
    {
        WebClient client = new System.Net.WebClient();

        string uriPath = ftpHostUpload + filePathOut;

        Uri fullUri = new Uri(uriPath);
        print("Caminho no servidor" + fullUri);



        client.Credentials = new NetworkCredential(ftpUserName, ftpPassword);
        print("Copiando arquivo de: " + filePathOrigin);
        client.UploadFileAsync(fullUri, filePathOrigin);
    }
}