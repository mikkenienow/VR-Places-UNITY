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
        this.fileData = this.GetTexture();
        this.ChangeTexture();
        this.MaterialTransform();
        this.ChangeColor();
    }

    public void ChangeTexture()
    {
        if (this.mainText != "none/none" && this.newTexture) {
            Texture2D texture = new Texture2D(1, 1);
            texture.LoadImage(this.fileData);
            //texture.name = this.colecaoId + "/" + this.texturaId;
            this.target.GetComponent<Renderer>().material.SetTexture("_MainTex", texture);
            this.target.GetComponent<Renderer>().material.name = this.colecaoId + "/" + this.texturaId;
        } else
        {
            Texture2D texture = new Texture2D(1, 1);
            //texture.name = this.mainText;
            this.target.GetComponent<Renderer>().material.SetTexture("_MainTex", texture);
            this.target.GetComponent<Renderer>().material.name = this.mainText;
            Debug.Log(this.target.GetComponent<Renderer>().material.name);
        }

    }
    public void MaterialTransform()
    {
        float x = target.transform.localScale.x;
        float y = target.transform.localScale.y;
        this.target.GetComponent<Renderer>().material.SetTextureScale("_MainTex", new Vector2(x, y));

    }

    public void ChangeColor()
    {
        this.target.GetComponent<Renderer>().material.color = this.color;
    }

    public byte[] TextureFile(string filePath)
    {
        if (this.newTexture)
        {
            return File.ReadAllBytes(filePath);
        }
        return null;
    }

    public string GetTextureId(string filePath)
    {
        string[] name = filePath.Split("/");
        string final = name[name.Length-1];
        final = final.Substring(0, final.Length - 4);
        return final;
    }
    public string GetColecaoId(string filePath)
    {
        string[] name = filePath.Split("/");
        string final = name[name.Length - 2];
        return final;
    }
    public byte[] GetTexture()
    {
        byte[] file = null;
        if (this.mainText != "none/none") { 
        string texturePath = "_materials / " + this.colecaoId + " / " + this.texturaId;
        string fileFormat = ".jpg";
        string localPath = Application.persistentDataPath + "/temp/";
        string serverPath = "ftp://vrplaces@ftp.vrplaces.com.br/public_html/_files/" + texturePath + fileFormat;
        Texture2D texture = new Texture2D(1, 1);

        if (File.Exists(localPath + texturePath + fileFormat))
        {
            file = File.ReadAllBytes(localPath + texturePath + fileFormat);
        }
        else
        {
            TransferDown td = new TransferDown(localPath, this.texturaId, fileFormat, serverPath);
            file = File.ReadAllBytes(localPath + texturePath + fileFormat);
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
        this.colecaoId = GetTexturaId();
        this.texturaId = GetColecaoId();
    }

    public string GetTexturaId()
    {

        string[] name = this.mainTexture.Split("/");
        string final = name[name.Length - 2];

        return final;
    }
    public string GetColecaoId()
    {
        string[] name = this.mainTexture.Split("/");
        string final = name[name.Length - 1];

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
        string texturePath = "_materials / " + this.colecaoId + " / " + this.texturaId;
        string fileFormat = ".jpg";
        string localPath = Application.persistentDataPath + "/temp/";
        string serverPath = "ftp://vrplaces@ftp.vrplaces.com.br/public_html/_files/" + texturePath + fileFormat;
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