using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrefabAnimation : MonoBehaviour
{
    public Animator animator;
    bool doorOpened = false;


    [ContextMenu("Abrir porta")]
    public void OpenDoor()
    {
        animator.SetTrigger("OpenDoor");
    }
    [ContextMenu("Fechar porta")]
    public void CloseDoor()
    {
        animator.SetTrigger("CloseDoor");
    }

    public void Action()
    {
        if (doorOpened)
        {
            CloseDoor();
            doorOpened = false;
        } else
        {
            OpenDoor();
            doorOpened = true;
        }
    }
}
