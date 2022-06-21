using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class VRPfile
{
    public string id;
    public float px, py, pz;
    public float rx, ry, rz, rw;
    public float sx, sy, sz;
    public List<VRPMaterial> materialList;

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

    public Quaternion GetRotation()
    {
        Quaternion rot = new Quaternion(rx, ry, rz, rw);
        return rot;
    }

    public Vector3 GetScale()
    {
        Vector3 sca = new Vector3(sx, sy, sz);
        return sca;
    }

    public List<VRPMaterial> GetMaterialList()
    {
        return this.materialList;
    }
}
