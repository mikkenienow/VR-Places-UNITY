using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Controls : MonoBehaviour
{
    public Button shiftObj;
    public Button capsObj;
    public static bool shift = false;
    public static bool uppercase = false;
    

    public void Shift()
    {   
        shift = !shift;
        ShiftChange();
    }
    public void ShiftChange()
    {
        ColorBlock color = shiftObj.colors;
        if (shift)
        {
            color.normalColor = Color.green;
            color.selectedColor = Color.green;
            shiftObj.colors = color;
        }
        else
        {
            color.normalColor = Color.white;
            color.selectedColor = Color.white;
            shiftObj.colors = color;
        }
    }    
    public void CapsChange()
    {
        ColorBlock color = capsObj.colors;
        if (uppercase)
        {
            color.normalColor = Color.green;
            color.selectedColor = Color.green;
            capsObj.colors = color;
        }
        else
        {
            color.normalColor = Color.white;
            color.selectedColor = Color.white;
            capsObj.colors = color;
        }
    }
    public void Caps()
    {
        uppercase = !uppercase;
        CapsChange();
    }
    public void Erase(GameObject inputField)
    {
        string temp = inputField.GetComponent<TMP_InputField>().text;
        int tempLength = temp.Length - 1;
        inputField.GetComponent<TMP_InputField>().text = temp.Substring(0, tempLength);
    }
    void Update()
    {
        ShiftChange();
        CapsChange();
    }
}
