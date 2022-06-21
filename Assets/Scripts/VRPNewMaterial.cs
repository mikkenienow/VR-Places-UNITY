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
    GameObject target;
    byte[] fileData;
    bool newTexture;
    Color color;
    Texture2D texture;
    string texturaId;
    string colecaoId;
    public VRPNewMaterial(GameObject target, string filePath, bool newTexture, Color color)
    {
        this.target = target;
        this.newTexture = newTexture;
        this.fileData = TextureFile(filePath);
        this.texturaId = GetTextureId(filePath);
        this.colecaoId = GetColecaoId(filePath);
        this.color = color;
        this.ChangeTexture();
        this.MaterialTransform();
        this.ChangeColor();
    }

    public void ChangeTexture()
    {
        if (this.newTexture)
        {
            this.texture = new Texture2D(1, 1);
            texture.LoadImage(this.fileData);
            texture.name = this.colecaoId + "/" + this.texturaId;
            this.target.GetComponent<Renderer>().material.SetTexture("_MainTex", texture);
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
}
[System.Serializable]
public class VRPMaterial
{
    float r;
    float g;
    float b;
    float a;

    string colecaoId;
    string texturaId;

    public VRPMaterial(Color color, string mainTexture)
    {
        this.r = color.r;
        this.g = color.g;
        this.b = color.b;
        this.a = color.a;
        this.colecaoId = GetTexturaId(mainTexture);
        this.texturaId = GetColecaoId(mainTexture);
    }

    string GetTexturaId(string mainTexture)
    {
        string[] name = mainTexture.Split("/");
        string final = name[name.Length - 2];

        return final;
    }
    string GetColecaoId(string mainTexture)
    {
        string[] name = mainTexture.Split("/");
        string final = name[name.Length - 1];

        return final;
    }

    public Color GetColor()
    {
        return new Color(this.r, this.g, this.b, this.a);
    }

    public Texture2D GetTexture()
    {
        string texturePath = "_materials / " + this.colecaoId + " / " + this.texturaId;
        string fileFormat = ".jpg";
        string localPath = Application.persistentDataPath + "/temp/";
        string serverPath = "ftp://vrplaces@ftp.vrplaces.com.br/public_html/_files/" + texturePath + fileFormat;
        Texture2D texture = new Texture2D(1,1);
        texture.name = this.colecaoId + "/" + this.texturaId;

        if (File.Exists(localPath + texturePath + fileFormat))
        {
            byte[] file = File.ReadAllBytes(localPath + texturePath + fileFormat);
            texture.LoadImage(file);
        }
        else
        {
            TransferDown td = new TransferDown(localPath, this.texturaId,fileFormat, serverPath);
            byte[] file = File.ReadAllBytes(localPath + texturePath + fileFormat);
            texture.LoadImage(file);
        }

        return texture;
    }


}