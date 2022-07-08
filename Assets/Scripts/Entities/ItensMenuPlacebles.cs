using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItensMenuPlacebles : MonoBehaviour
{
    public GameObject placeable;
    public static GameObject selectedPlaceable;

    public void SelectPlaceable()
    {
        selectedPlaceable = placeable;
        print(selectedPlaceable.ToString());
    }
}
