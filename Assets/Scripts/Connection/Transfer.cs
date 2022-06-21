using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Net;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;

public class Transfer : MonoBehaviour
{
    
}

public class TransferDown : MonoBehaviour
{
    private string filePathLocal;
    private string nameFile;
    private string formatFile;
    private string urlFileOrigin;

    public TransferDown(string filePathLocal, string nameFile, string formatFile, string urlFileOrigin)
    {
        this.filePathLocal = Application.persistentDataPath + checkPath(filePathLocal, true);
        this.nameFile = nameFile;
        this.formatFile = formatFile;
        this.urlFileOrigin = urlFileOrigin;
        DownloadFile();
    }
    public void DownloadFile()
    {
        string path = urlFileOrigin;
        DirectoryInfo di = Directory.CreateDirectory(filePathLocal);
        using (WebClient client = new WebClient())
        {
            client.DownloadFile(urlFileOrigin, di + nameFile + formatFile);
        }
    }
    static public bool URLExists(string url)
    {
        bool result = false;
        HttpWebResponse response = null;
        WebRequest webRequest = WebRequest.Create(url);
        webRequest.Timeout = 1200; // miliseconds
        webRequest.Method = "HEAD";
        
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

    private string checkPath(string pathToCheck, bool onlyPath)
    {
        if (!pathToCheck.EndsWith("/") && onlyPath)
        {
            pathToCheck = pathToCheck + "/";
        }
        if (!pathToCheck.StartsWith("/"))
        {
            pathToCheck = "/" + pathToCheck;
        }

        return pathToCheck;
    }
}

public class TransferUp : MonoBehaviour
{
    public string ftpHostUpload = Autentication.FtpHostUpload;

    public string ftpUserName = Autentication.FtpUserName;

    public string ftpPassword = Autentication.FtpPassword;

    public string completeFilePath;

    public string filePathOut;

    public TransferUp(string completeFilePath, string filePathOut)
    {
        this.completeFilePath = Application.persistentDataPath + checkPath(completeFilePath, false);
        this.filePathOut = checkPath(filePathOut, false);
    }

    public void UploadFile()
    {
        WebClient client = new System.Net.WebClient();
        string uriPath = ftpHostUpload + filePathOut;
        string[] directoryCreate = filePathOut.Split("/");
        string directory = "";
        for (int i = 0; i < directoryCreate.Length; i++)
        {
            if (i+1 != directoryCreate.Length)
            {
                directory = directory + directoryCreate[i] + "/";
            }
        }
        print(directory);
        Uri fullUri = new Uri(uriPath);
        CheckMakeDir(directory);
        client.Credentials = new NetworkCredential(ftpUserName, ftpPassword);
        client.UploadFileAsync(fullUri, completeFilePath);
    }

    private string checkPath(string pathToCheck, bool onlyPath)
    {
        if (!pathToCheck.EndsWith("/") && onlyPath)
        {
            pathToCheck = pathToCheck + "/";
        }
        if (!pathToCheck.StartsWith("/"))
        {
            pathToCheck = "/" + pathToCheck;
        }

        return pathToCheck;
    }

    private void CheckMakeDir(string pathToCreate)
    {
        if (!Directory.Exists(pathToCreate))
        {
            WebRequest request = WebRequest.Create(Autentication.FtpHostUpload + pathToCreate);
            request.Method = WebRequestMethods.Ftp.MakeDirectory;
            request.Credentials = new NetworkCredential(Autentication.FtpUserName, Autentication.FtpPassword);
            using (var resp = (FtpWebResponse)request.GetResponse())
            {
                print(resp.StatusCode);
            }
        }
        
    }
}