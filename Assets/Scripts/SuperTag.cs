using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SuperTag : MonoBehaviour
{
    public string[] superTags;


    public bool TagVerify(string tag)
    {
        for (int i = 0; i < superTags.Length; i++)
        {
            if (tag == superTags[i])
            {
                return true;
            }
        }

        return false;
    }
}
