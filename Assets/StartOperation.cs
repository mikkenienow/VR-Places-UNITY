using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartOperation : MonoBehaviour
{
    void Start()
    {
        JoystickManager.SetOperation(Operation.CONSTRUCTION);
    }

}
