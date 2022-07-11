using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItensMenuTexture : MonoBehaviour
{
    public string idColecao;
    public string idTextura;
    public static string selectedtexture = "none/none";

    public void SelectTexture()
    {
        selectedtexture = idColecao + "/" + idTextura;
    }
}
