using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.Experimental.Rendering;
using UnityEngine.SceneManagement;

[System.Serializable]
public class VRPNewMaterial
{
    Transform target;
    byte[] fileData;
    bool newTexture;
    Color color;
    string mainText;
    string texturaId;
    string colecaoId;
  
    
    public VRPNewMaterial(Transform target, VRPMaterial texture, bool newTexture)
    {
        this.target = target;
        this.newTexture = newTexture;
        this.mainText = texture.GetMainTexture();
        this.texturaId = texture.GetTexturaId();
        this.colecaoId = texture.GetColecaoId();
        this.color = texture.GetColor();
        this.fileData = GetTexture();
        ChangeTexture();
        MaterialTransform();
        ChangeColor();
    }
    public void NewVRPMaterial(Transform target, VRPMaterial texture, bool newTexture)
    {
        this.target = target;
        this.newTexture = newTexture;
        mainText = texture.GetMainTexture();
        texturaId = texture.GetTexturaId();
        colecaoId = texture.GetColecaoId();
        color = texture.GetColor();
        fileData = GetTexture();
        ChangeTexture();
        MaterialTransform();
        ChangeColor();
    }
    public void ChangeTexture()
    {
        if (mainText != "none/none" && newTexture) {
            Texture2D texture = new Texture2D(1, 1);
            texture.LoadImage(fileData);
            //texture.name = this.colecaoId + "/" + this.texturaId;
            target.GetComponent<Renderer>().material.SetTexture("_MainTex", texture);
            target.GetComponent<Renderer>().material.name = colecaoId + "/" + texturaId;
        } else
        {
            Texture2D texture = new Texture2D(1, 1);
            //texture.name = this.mainText;
            target.GetComponent<Renderer>().material.SetTexture("_MainTex", texture);
            target.GetComponent<Renderer>().material.name = mainText;
            Debug.Log(target.GetComponent<Renderer>().material.name);
        }

    }
    public void MaterialTransform()
    {
        float x = target.transform.parent.transform.localScale.z;
        float y = target.transform.parent.transform.localScale.y;
        target.GetComponent<Renderer>().material.SetTextureScale("_MainTex", new Vector2(x, y));

    }

    public void ChangeColor()
    {
        target.GetComponent<Renderer>().material.color = color;
    }

    public byte[] TextureFile(string filePath)
    {
        if (newTexture)
        {
            return File.ReadAllBytes(filePath);
        }
        return null;
    }

    public static string GetTextureId(string filePath)
    {
        string[] name = filePath.Split("/");
        string final = name[name.Length-1];
        final = final.Substring(0, final.Length - 4);
        return final;
    }
    public static string GetColecaoId(string filePath)
    {
        string[] name = filePath.Split("/");
        string final = name[name.Length - 2];
        return final;
    }
    public byte[] GetTexture()
    {
        byte[] file = null;
        if (mainText != "none/none") {
            // public_html/_files/_biblioteca/_materials/free
            string texturePath = "_biblioteca/_materials/" + colecaoId + "/";
            string fileFormat = ".png";
            string localPath = Application.persistentDataPath + "/temp/";
            string serverPath = "https://vrplaces.com.br/_files/" + texturePath + texturaId + fileFormat;
            Debug.Log(serverPath);
            Texture2D texture = new Texture2D(1, 1);

            if (File.Exists(localPath + texturePath + texturaId + fileFormat))
            {
                file = File.ReadAllBytes(localPath + texturePath + texturaId + fileFormat);
            }
            else
            {
                TransferDown td = new TransferDown("/temp/" + texturePath, texturaId, fileFormat, serverPath);
                file = File.ReadAllBytes(localPath + texturePath + texturaId + fileFormat);
            } 
        }
        return file;
    }

}
[System.Serializable]
public class VRPMaterial 
{
    float r;
    float g;
    float b;
    float a;
    string mainTexture;
    string colecaoId;
    string texturaId;

    public VRPMaterial(Color color, string mainTexture)
    {
        this.r = color.r;
        this.g = color.g;
        this.b = color.b;
        this.a = color.a;
        this.mainTexture = mainTexture;
        this.colecaoId = GetColecaoId();
        this.texturaId = GetTexturaId();
    }

    public string GetTexturaId()
    {

        string[] name = this.mainTexture.Split("/");
        string final = name[1];
        Debug.Log("ID textura " + final);
        return final;
    }
    public string GetColecaoId()
    {
        string[] name = this.mainTexture.Split("/");
        string final = name[0];
        Debug.Log("ID coleção " + final);
        return final;
    }

    public Color GetColor()
    {
        return new Color(this.r, this.g, this.b, this.a);
    }

    public string GetMainTexture()
    {
        return this.mainTexture;
    }
    public Texture2D GetTexture()
    {
        string texturePath = "_materials/ " + this.colecaoId + "/" + this.texturaId;
        string fileFormat = ".PNG";
        string localPath = Application.persistentDataPath + "/temp/";
        string serverPath = "https://vrplaces.com.br/_files/" + texturePath + fileFormat;
        Texture2D texture = new Texture2D(1,1);
        texture.name = this.colecaoId + "/" + this.texturaId;
        byte[] file;

        if (File.Exists(localPath + texturePath + fileFormat))
        {
            file = File.ReadAllBytes(localPath + texturePath + fileFormat);
            texture.LoadImage(file);
        }
        else
        {
            TransferDown td = new TransferDown(localPath, this.texturaId,fileFormat, serverPath);
            file = File.ReadAllBytes(localPath + texturePath + fileFormat);
            texture.LoadImage(file);
        }

        return texture;
    }


}