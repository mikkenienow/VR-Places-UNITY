using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.XR;

public class SelectionToolLeft : MonoBehaviour
{
    public GameObject bola;
    public GameObject Parede;
    public GameObject ParedeZ;

    private XRNode xrNodeLeft = XRNode.LeftHand;
    private List<InputDevice> devices = new List<InputDevice>();
    private InputDevice deviceLeft;

    //sistema de 3 pontos
    Vector3 p1;
    Vector3 hitTemporary;
    int cont = 0;
    public float range = 20;
    bool triggerOn = true;
    string eixo="x";

    void getDevice()
    {
        InputDevices.GetDevicesAtXRNode(xrNodeLeft, devices);
        deviceLeft = devices.FirstOrDefault();
    }
    void OnEnable()
    {
        if (!deviceLeft.isValid)
        {
            getDevice();
        }
    }
    bool InverterAngulo(RaycastHit hit)
    {
        float eixoX = p1.x - hit.point.x;
        float eixoZ = p1.z - hit.point.z;
        if (eixoX < 0) eixoX = -1 * eixoX;
        if (eixoZ < 0) eixoZ = -1 * eixoZ;
        return (eixoX > eixoZ);
    }








    // Update is called once per frame
    void Update()
    {
        OnEnable();
        //Raycast
        Vector3 direction = Vector3.forward;
        Ray theRay = new Ray(transform.position, transform.TransformDirection(direction * range));
        Debug.DrawRay(transform.position, transform.TransformDirection(direction * range));
        RaycastHit hit;

        if (Physics.Raycast(theRay, out hit, range))
        {
            print("Colidindo...........");
            bool triggerButtonAction = false;
            if (triggerOn)
            {
                if (deviceLeft.TryGetFeatureValue(CommonUsages.triggerButton, out triggerButtonAction) && triggerButtonAction)
                {
                    print("Trigger ativado...........");
                    triggerOn = false;
                    hitTemporary = hit.point;

                    if (cont == 0)
                    {
                        print("Criar painel...........");
                        p1 = hit.point;
                        Parede = Instantiate(Parede, p1, new Quaternion(0, 0, 0, 1));
                    }
                    if (cont == 1)
                    {
                        cont = 0;
                        p1 = new Vector3(0, 0, 0);
                    }
                }
            }
            if (deviceLeft.TryGetFeatureValue(CommonUsages.triggerButton, out triggerButtonAction) && triggerButtonAction)
            {
                // caso o trigger esteja pressionado, não faça nada

                if(InverterAngulo(hit))
                {
                        print("Acompanhar raio em X.");
                        if (InverterAngulo(hit)) eixo = "x";
                            if (eixo.Equals("x"))
                            {
                                Parede.transform.Rotate(new Vector3(0f, 0f, 0f));
                            }
                        Parede.transform.localScale = new Vector3(p1.x - hit.point.x, 2, 0.15f);
                        print("eixo atual:" + eixo + " eixo esperado é X");
                } else
                {       
                        print("Acompanhar raio em Z.");             
                        if (!InverterAngulo(hit)) eixo = "z";
                            if (eixo.Equals("z"))
                            {
                                Parede.transform.Rotate(new Vector3(0f, -90f, 0f));
                            }
                        Parede.transform.localScale = new Vector3(p1.x - hit.point.x, 2, 0.15f);
                        print("eixo atual:"+eixo+" eixo esperado é Z");
                }


               
            }
            else
            {
                if(cont == 5)
                {
                    cont = 1;
                }
                print("Trigger OFF...........");
                triggerOn = true; //caso contrário libere o usu do trigger
            }
        }
    }
}
/*
if (hit.collider.tag == "Bola Azul")
{
    //print("Bola Azul");
}*/