using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItensMenuPlaceables : MonoBehaviour
{
    public GameObject placeable;
    private GameObject placeableInstatiate = null;
    Transform selectedPlaceable;

    public void SelectPlaceable()
    {

        placeableInstatiate = Instantiate(placeable, JoystickManager.globalHit.transform.position, new Quaternion(0, 0, 0, 1));

        selectedPlaceable = placeableInstatiate.GetComponent<Transform>();
        selectedPlaceable.gameObject.layer = 2;
        FRPPFile.SetLayerRecursively(selectedPlaceable.gameObject, 2);
        Placeables.selectedPlaceable = placeableInstatiate;
        selectedPlaceable.GetComponent<FRPPFile>().selected = true;
        Placeables.subOp = PlaceableSubOperation.PLACING;
    }
    
    public void SetPreview()
    {
        Menu.prefab = placeable;
    }
}
