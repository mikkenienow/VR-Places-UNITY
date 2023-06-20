using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItensMenuPainting : MonoBehaviour
{
    public Color color = new Color();
    public static Color selectedColor;

    public void SelectColor()
    {
        selectedColor = color;
        //print(selectedColor.ToString());
    }
}
