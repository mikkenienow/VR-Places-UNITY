using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItensMenuTexture : MonoBehaviour
{
    public Texture texture ;
    public static Texture selectedtexture;

    public void SelectTexture()
    {
        selectedtexture = texture;
        print(selectedtexture.ToString());
    }
}
