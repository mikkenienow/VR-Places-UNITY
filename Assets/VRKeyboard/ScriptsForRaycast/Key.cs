using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Key : MonoBehaviour
{
    public string character;
    public void InsertText(GameObject obj)
    {
        print("Inserindo txto: " + character);
        string output = character;
        TMP_InputField input = obj.GetComponent<TMP_InputField>();

        if (Controls.uppercase)
        {
            output = output.ToUpper();

            if (Controls.shift)
            {
                Controls.shift = false;
                output = output.ToLower();
            }
        } 
        else
        {
            if (Controls.shift)
            {
                Controls.shift = false;
                output = output.ToUpper();
            }
        }

        obj.GetComponent<TMP_InputField>().text = input.text + output;
        print("Inserido: " + character);
    }
}
