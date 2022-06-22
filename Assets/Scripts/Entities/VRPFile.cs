using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class VRPfile
{
    private string id;
    private float px, py, pz;
    private float rx, ry, rz, rw;
    private float sx, sy, sz;
    private List<VRPMaterial> materialList;

    public VRPfile(string id, Transform obj)
    {
        this.id = id;
        this.px = obj.transform.position.x;
        this.py = obj.transform.position.y;
        this.pz = obj.transform.position.z;
        this.rx = obj.transform.rotation.x;
        this.ry = obj.transform.rotation.y;
        this.rz = obj.transform.rotation.z;
        this.rw = obj.transform.rotation.w;
        this.sx = obj.transform.localScale.x;
        this.sy = obj.transform.localScale.y;
        this.sz = obj.transform.localScale.z;
    }
    public VRPfile(string id, Transform obj, List<VRPMaterial> materialList)
    {
        this.id = id;
        this.px = obj.transform.position.x;
        this.py = obj.transform.position.y;
        this.pz = obj.transform.position.z;
        this.rx = obj.transform.rotation.x;
        this.ry = obj.transform.rotation.y;
        this.rz = obj.transform.rotation.z;
        this.rw = obj.transform.rotation.w;
        this.sx = obj.transform.localScale.x;
        this.sy = obj.transform.localScale.y;
        this.sz = obj.transform.localScale.z;
        this.materialList = materialList;
    }
    public Vector3 GetPosition()
    {
        Vector3 pos = new Vector3(px, py, pz);
        return pos;
    }

    public void SetPosition(Transform obj)
    {
        this.px = obj.transform.position.x;
        this.py = obj.transform.position.y;
        this.pz = obj.transform.position.z;
    }

    public Quaternion GetRotation()
    {
        Quaternion rot = new Quaternion(rx, ry, rz, rw);
        return rot;
    }

    public void SetRotation(Transform obj)
    {
        this.rx = obj.transform.rotation.x;
        this.ry = obj.transform.rotation.y;
        this.rz = obj.transform.rotation.z;
        this.rw = obj.transform.rotation.w;
    }

    public Vector3 GetScale()
    {
        Vector3 sca = new Vector3(sx, sy, sz);
        return sca;
    }

    public void SetScale(Transform obj)
    {
        this.sx = obj.transform.localScale.x;
        this.sy = obj.transform.localScale.y;
        this.sz = obj.transform.localScale.z;
    }
    public List<VRPMaterial> GetMaterialList()
    {
        return this.materialList;
    }

    public void SetMaterialList(List<VRPMaterial> materialList)
    {
        this.materialList = materialList;
    }

}
