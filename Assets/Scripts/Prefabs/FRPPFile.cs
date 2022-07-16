using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class FRPPFile : MonoBehaviour
{


    [SerializeField] public AnchorPoint anchorPoint;
    [SerializeField] public GameObject[] fixedSizeX;
    [SerializeField] public GameObject[] fixedSizeY;
    [SerializeField] public GameObject[] fixedSizeZ;

    [SerializeField] public GameObject[] fixedPosX;
    [SerializeField] public GameObject[] fixedPosY;
    [SerializeField] public GameObject[] fixedPosZ;

    [SerializeField] public string[] superTags;

    [SerializeField] public bool transformFromTarget = false;




    [SerializeField] GameObject selectionBox;
    [SerializeField] Material selectedObject;
    [SerializeField] Material notPlaceble;
    [SerializeField] Material placeble;


    List<Vector3> listXScale = new List<Vector3>();
    List<Vector3> listYScale = new List<Vector3>();
    List<Vector3> listZScale = new List<Vector3>();
    List<Vector3> listXPos = new List<Vector3>();
    List<Vector3> listYPos = new List<Vector3>();
    List<Vector3> listZPos = new List<Vector3>();

    private Vector3 defaultScale;
    public Vector3 fixedScale;
    public bool x = false;
    public bool y = false;
    public bool z = false;

    Quaternion defaultRotation;



    private GameObject target;
    public Vector3 followPoint;
    Vector3 check;
    public bool selected = false;

    public void Start()
    {
        defaultScale = this.transform.lossyScale;
        defaultRotation = this.transform.localRotation;

        listXScale = GetStartScale(fixedSizeX);
        listYScale = GetStartScale(fixedSizeY);
        listZScale = GetStartScale(fixedSizeZ);
        
        listXPos = GetStartPos(fixedPosX);
        listYPos = GetStartPos(fixedPosY);
        listZPos = GetStartPos(fixedPosZ);
    }
    public void FollowPoint()
    {
        followPoint = JoystickManager.globalHit.point;
        if (selected)
        {
            if (transformFromTarget && ValidatePosition())
            {
                this.transform.position = GetAnchorAdjust();
            } else
            {
                print("carregando objeto...........");
                this.transform.position = followPoint;
            }
            
        }
    }
    /*
    TOPLEFT,
    TOPCENTER,
    TOPRIGHT,
    MIDLELEFT,
    MIDLECENTER,
    MIDLERIGHT,
    BOTTONLEFT,
    BOTTONCENTER,
    BOTTONRIGHT
    */
    public Vector3 GetAnchorAdjust()
    {
        Vector3 output = target.transform.position;
        Vector3 scale = target.transform.lossyScale;
        print("Ancoragem atual: " + this.anchorPoint);
        switch (this.anchorPoint)
        {
            case AnchorPoint.BOTTONLEFT:
                print("Novo ponto de ancora");
                output = new Vector3(output.x, output.y - (scale.y / 2), output.z - (scale.z / 2));
                break;
        }

        return output;
    }

    public void CheckSelection()
    {
        if (selected)
        {
            selectionBox.SetActive(selected);
            Renderer rend = selectionBox.GetComponent<Renderer>();
            if (ValidatePosition())
            {
                target = Placeables.placeableTarget;
                rend.sharedMaterial = placeble;

            } else
            {
                target = null;
                rend.sharedMaterial = notPlaceble;
            }
            MaterialTransform(selectionBox);
        }
        else
        {
            selectionBox.SetActive(false);
            Renderer rend = selectionBox.GetComponent<Renderer>();
            rend.sharedMaterial = selectedObject;
        }
    }

    public bool ValidatePosition()
    {
        for (int i = 0; i < superTags.Length; i++)
        {
            if (JoystickManager.globalHit.collider.tag == superTags[i])
            {
                return true;
            }
            if (JoystickManager.globalHit.collider.GetComponent<SuperTag>())
            {
                if (JoystickManager.globalHit.collider.GetComponent<SuperTag>().TagVerify(superTags[i]))
                {
                    return true;
                }
            }
        }

        return false;
    }

    public bool PutOnPlace()
    {
        if (selected)
        {
            if (ValidatePosition())
            {

                selected = false;
                CheckSelection();
                if (transformFromTarget)
                {
                    target.gameObject.GetComponent<PlaceableSpace>().SetAttached(this.gameObject);
                    this.transform.localPosition = GetAnchorAdjust();
                    this.transform.localRotation = target.transform.rotation;
                    this.transform.parent = JoystickManager.cenario.transform;
                    ObjectUpdateSize();

                } else
                {
                    this.transform.localPosition = followPoint;
                    this.transform.localRotation = defaultRotation;
                    this.transform.localScale = defaultScale;
                    this.transform.parent = JoystickManager.cenario.transform;
                }
                return true;
            }
            return false;
        }
        return false;
    }

    public List<Vector3> GetStartScale(GameObject[] obj)
    {
        List<Vector3> output = new List<Vector3>();
        for (int i = 0; i < obj.Length; i++)
        {
            Vector3 getScale = obj[i].transform.localScale;
            output.Add(getScale);
        }
        return output;
    }
    public List<Vector3> GetStartPos(GameObject[] obj)
    {
        List<Vector3> output = new List<Vector3>();
        for (int i = 0; i < obj.Length; i++)
        {
            Vector3 getPos = obj[i].transform.localPosition;
            output.Add(getPos);
        }
        return output;
    }

    public void MaterialTransform(GameObject target)
    {
        float x = target.transform.parent.transform.lossyScale.z;
        float y = target.transform.parent.transform.lossyScale.y;
        target.GetComponent<Renderer>().material.SetTextureScale("_MainTex", new Vector2(x, y));
    }

    public void ObjectUpdateSize()
    {
        if (ValidatePosition()) {
            if (transformFromTarget)
            {
                if (/*check != target.transform.localScale*/true)
                {
                    if (fixedScale != null)
                    {
                        Vector3 temp = fixedScale;
                        if (this.x)
                        {
                            this.transform.localScale = new Vector3(fixedScale.x, temp.y, temp.z);
                        }
                        else
                        {
                            this.transform.localScale = new Vector3(target.transform.localScale.x, temp.y, temp.z);
                        }
                        if (this.y)
                        {
                            this.transform.localScale = new Vector3(temp.x, fixedScale.y, temp.z);
                        }
                        else
                        {
                            this.transform.localScale = new Vector3(temp.x, target.transform.lossyScale.y, temp.z);
                        }
                        if (this.z)
                        {
                            this.transform.localScale = new Vector3(temp.x, temp.y, fixedScale.z);
                        }
                        else
                        {
                            this.transform.localScale = new Vector3(temp.x, temp.y, target.transform.lossyScale.z);
                        }
                    } else
                    {
                        this.transform.localScale = new Vector3(target.transform.localScale.x, target.transform.lossyScale.y, target.transform.lossyScale.z);
                    }
                    
                    float x = this.transform.localScale.x;
                    float y = this.transform.localScale.y;
                    float z = this.transform.localScale.z;

                    for (int i = 0; i < fixedSizeX.Length; i++)
                    {
                        float xList = listXScale[i].x;
                        float yList = listXScale[i].y;
                        float zList = listXScale[i].z;

                        fixedSizeX[i].transform.localScale = new Vector3((xList / x), yList, zList);
                    }
                    for (int i = 0; i < fixedSizeY.Length; i++)
                    {
                        float xList = listYScale[i].x;
                        float yList = listYScale[i].y;
                        float zList = listYScale[i].z;

                        fixedSizeY[i].transform.localScale = new Vector3(xList, (yList / y), zList);
                    }
                    for (int i = 0; i < fixedSizeZ.Length; i++)
                    {
                        float xList = listZScale[i].x;
                        float yList = listZScale[i].y;
                        float zList = listZScale[i].z;

                        print(fixedSizeZ[i].name + " scale " + zList);
                        fixedSizeZ[i].transform.localScale = new Vector3(xList, yList, (zList / z));

                    }
                }
            }
        } else
        {
            ResetTransform();
        }
    }

    public void ObjectUpdatePos()
    {
        if (ValidatePosition()) {
            if (transformFromTarget)
            {
                if (check != target.transform.localScale)
                {
                    this.transform.localScale = target.transform.lossyScale;
                    for (int i = 0; i < fixedPosX.Length; i++)
                    {
                        fixedPosX[i].transform.localPosition = listXPos[i];
                    }
                    for (int i = 0; i < fixedPosY.Length; i++)
                    {
                        fixedPosY[i].transform.localPosition = listYPos[i];
                    }
                    for (int i = 0; i < fixedPosZ.Length; i++)
                    {
                        fixedPosZ[i].transform.localPosition = listZPos[i];
                    }
                }
            }
        } else
        {
            ResetTransform();
        }
    }

    public void ResetTransform()
    {
        this.transform.localScale = defaultScale;
        this.transform.localRotation = defaultRotation;
    }
    void Update()
    {
        if (selected)
        {
            
            CheckSelection();
            FollowPoint();
            check = this.transform.localScale;
            ObjectUpdateSize();
            ObjectUpdatePos();
        }
        
    }

    public static void SetLayerRecursively(GameObject go, int layerNumber)
    {
        foreach (Transform trans in go.GetComponentsInChildren<Transform>(true))
        {
            trans.gameObject.layer = layerNumber;
        }
    }


}
public enum AnchorPoint
{
    TOPLEFT,
    TOPCENTER,
    TOPRIGHT,
    MIDLELEFT,
    MIDLECENTER,
    MIDLERIGHT,
    BOTTONLEFT,
    BOTTONCENTER,
    BOTTONRIGHT
}