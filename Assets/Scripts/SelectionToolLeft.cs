using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR;

public class SelectionToolLeft : MonoBehaviour
{
    public GameObject bola;
    public GameObject parede;
    public GameObject paredePorta;
    public GameObject paredeJanela;

    public GameObject ParedeZ;
    public GameObject pontoInicial;
    public GameObject pontoFinal;
    BoxCollider selectedObject;

    //experimental
    SaveLoad saveLoad = new SaveLoad();
    public List<SavableObjects> savebleObjects = new List<SavableObjects>();
    public Identification[] placebleObjects;
    Transform parent;


    //experimental




    string ferramentaAtiva = "construção"; //construção  selecao

    private XRNode xrNodeLeft = XRNode.LeftHand;
    private List<InputDevice> devices = new List<InputDevice>();
    private InputDevice controleEsquerdo;

    //sistema de 3 pontos
    Vector3 p1;
    public float range = 20;
    //funções do TRIGGER/GATILHO
    bool triggerOn = true;
    int countTriggerOn = 0;
    //variaveis de rotação
    bool eixoRotX = false;
    bool eixoRotZ = true;
    bool cont = false;
    bool anguloLivre = false;
    bool snapLigado = false;
    //contrução de paredes
    //primary button (botão de baixo) constroi porta
    //secondary button (botão de cima) constroi janela
    bool construirParede = true;
    bool construirPorta = true;
    bool construirJanela = true;
    string modoConstrucao = "";

    //raycast
    Vector3 direction = Vector3.forward;
    Vector3 direction2 = new Vector3();
    Ray theRay;
    RaycastHit hit;
    Vector3 pontoFinal2 = new Vector3();
    bool hitpointUse = true;
    float distance2 = 0;
    bool followHit = false;



    void getDevice()
    {
        InputDevices.GetDevicesAtXRNode(xrNodeLeft, devices);
        controleEsquerdo = devices.FirstOrDefault();
    }
    void OnEnable()
    {
        if (!controleEsquerdo.isValid)
        {
            getDevice();
        }
    }


    //string ferramentaAtiva = "construçãoDeParedes";
    string acao = "";
    //opções do trigger
    bool triggerButtonAction = false;
    bool triggerButtonLock = false;
    int triggerButtonCount = 0;
    int triggerButtonCountPress = 0;

    //opções do grip
    bool gripButtonAction = false;
    bool gripButtonLock = false;
    int gripButtonCount = 0;
    int gripButtonCountPress = 0;

    //opções do primary button
    bool primaryButtonAction = false;
    bool primaryButtonLock = false;
    int primaryButtonDelay = 0;
    int primaryButtonCount = 0;
    int primaryButtonCountPress = 0;

    //opções do secondary button
    bool secondaryButtonAction = false;
    bool secondaryButtonLock = false;
    int secondaryButtonCount = 0;
    int secondaryButtonCountPress = 0;

    string getButtonPressed()
    {
        if (controleEsquerdo.TryGetFeatureValue(CommonUsages.triggerButton, out triggerButtonAction) && triggerButtonAction && !triggerButtonLock)
        {   //trigger
            //criar parede
            if (triggerButtonCount == 0 && triggerButtonCountPress == 0)
            {
                acao = "criarParede";
                triggerButtonCount = 15;
                triggerButtonCountPress++;
                gripButtonLock = false;
            }
            if (triggerButtonCount == 0 && triggerButtonCountPress == 1)
            {
                triggerButtonCount = 15;
                triggerButtonCountPress = 0;
                acao = "";

                savebleObjects.Add(new SavableObjects("parede", parede.transform.position, parede.transform.rotation));
                saveLoad.Save();
            }
        }
        if (controleEsquerdo.TryGetFeatureValue(CommonUsages.gripButton, out gripButtonAction) && gripButtonAction && !gripButtonLock)
        {//liberar rotação
            anguloLivre = true;
        }
        else
        {
            anguloLivre = false;
        }
        if ((controleEsquerdo.TryGetFeatureValue(CommonUsages.primaryButton, out primaryButtonAction) && primaryButtonAction && !primaryButtonLock) || primaryButtonDelay > 0)
        {   //criar parede para porta
            if (primaryButtonCountPress == 0 && primaryButtonCount == 0)
            { 
                if (acao.Equals("criarParede")) gripButtonLock = true;
                acao = "criarParedePorta";
                primaryButtonCount = 15;
                triggerButtonLock = true;
                secondaryButtonLock = true;
                primaryButtonCountPress++;

            }
            if (primaryButtonCountPress == 1 && primaryButtonCount == 30)
            {
                primaryButtonCount = 15;
                primaryButtonCountPress = 0;
                triggerButtonLock = false;
                secondaryButtonLock = false;
                triggerButtonCountPress = 0;
                acao = "";
            }
            if (primaryButtonDelay > 0) primaryButtonDelay--;

            if (controleEsquerdo.TryGetFeatureValue(CommonUsages.primaryButton, out primaryButtonAction) && primaryButtonAction)
            {
                primaryButtonCount++;
                primaryButtonCount++;
                primaryButtonDelay = 15;
            }
            else
            {
                if (primaryButtonCountPress == 1 && primaryButtonCount == 0)
                {
                    primaryButtonCount = 15;
                    primaryButtonCountPress = 0;
                    triggerButtonLock = false;
                    secondaryButtonLock = false;
                    acao = "criarParede";
                    hitpointUse = false;
                    gripButtonLock = true;
                    primaryButtonDelay = 0;
                    triggerButtonCountPress = 0;
                }
            }
        }
        if (controleEsquerdo.TryGetFeatureValue(CommonUsages.secondaryButton, out secondaryButtonAction) && secondaryButtonAction && !secondaryButtonLock)
        {   //criar parede para janela
            if (primaryButtonCount == 0)
            {
                acao = "criarParedeJanela";
                secondaryButtonCount = 15;
                triggerButtonLock = true;
                primaryButtonLock = true;
            }
            else
            {
                secondaryButtonCount = 0;
                triggerButtonLock = false;
                primaryButtonLock = false;
                acao = "";
            }
        }
        if (triggerButtonCount != 0) triggerButtonCount--;
        if (gripButtonCount != 0) gripButtonCount--;
        if (primaryButtonCount != 0) primaryButtonCount--;
        if (secondaryButtonCount != 0) secondaryButtonCount--;

        return acao;
    }

    void selectObject(string nomeDoObjeto)
    {
        print("Tentando selecionar: " + nomeDoObjeto);
        if(controleEsquerdo.TryGetFeatureValue(CommonUsages.triggerButton, out triggerButtonAction) && triggerButtonAction && triggerButtonCount == 0)
        {
            print("Trigger ativado");
            if (triggerButtonCountPress == 1)
            {
                triggerButtonCountPress = 0;
                triggerButtonCount = 15;
                selectedObject.gameObject.layer = 0;
                selectedObject = null;
                followHit = false;
            }
            if (hit.collider.tag == nomeDoObjeto && triggerButtonCountPress == 0)
            {
                print("Objeto encontrado: " + nomeDoObjeto);
                triggerButtonCountPress++;
                triggerButtonCount = 15;
                selectedObject = hit.transform.GetComponent<BoxCollider>();
                selectedObject.gameObject.layer = 2;
                followHit = true;
                print(followHit);
            }
            
        }
        if(triggerButtonCount > 0) triggerButtonCount--;
    }

    Vector3 snap(Vector3 originalPosition)
    {
        Vector3 resultado = originalPosition;
        if (snapLigado)
        {
            float granularity = 0.15f;
            Vector3 snappedPosition = new Vector3(Mathf.Floor(originalPosition.x / granularity) * granularity, originalPosition.y, Mathf.Floor(originalPosition.z / granularity) * granularity);
            resultado = snappedPosition;
        }
        return resultado;
    }

    Vector3 endPoint(Vector3 currentPosition, float distance, float angle)
    {
        var x = distance * Mathf.Sin(angle * Mathf.Deg2Rad);
        var z = distance * Mathf.Cos(angle * Mathf.Deg2Rad);
        Vector3 newPosition = currentPosition;
        newPosition.x += x;
        newPosition.z += z;

        return newPosition;
    }

    void raycastCollision()
    {
        theRay = new Ray(transform.position, transform.TransformDirection(direction * range));
        Debug.DrawRay(transform.position, transform.TransformDirection(direction * range));
    }
    //metodos de contrução
    //### construção de parede
    void wallCreation()
    {
        //criar ponto inicial parede

        // precisa de uma sintaxe que traga o angulo da porta caso seja continuação
        print("criando parede");
        construirParede = false;
        primaryButtonLock = false;
        cont = false;
        acao = "modificarParede";
        if (hitpointUse)
        {
            print("criando parede do 0");
            pontoInicial = Instantiate(pontoInicial, hit.point, new Quaternion(0, 0, 0, 1));
            pontoFinal = Instantiate(pontoFinal, hit.point, new Quaternion(0, 0, 0, 1));
            parede = Instantiate(parede, pontoInicial.transform.position, Quaternion.identity);
        }
        else
        {
            print("Criando parede continuada...");
            pontoInicial = Instantiate(pontoInicial, pontoFinal2, paredePorta.transform.rotation);
            pontoFinal = Instantiate(pontoFinal, hit.point, new Quaternion(0, 0, 0, 1));
            parede = Instantiate(parede, pontoInicial.transform.position, pontoInicial.transform.rotation);
            hitpointUse = true;
            triggerButtonCountPress = 1;
        }

    }

    void wallTransformation()
    {
        pontoFinal.transform.position = snap(hit.point);

        if (anguloLivre)
        {
            pontoInicial.transform.LookAt(pontoFinal.transform.position);
            pontoFinal.transform.LookAt(pontoInicial.transform.position);
        }
        float distance = Vector3.Distance(pontoInicial.transform.position, pontoFinal.transform.position);
        distance2 = distance;
        
        if (anguloLivre)
        {
            parede.transform.LookAt(pontoFinal.transform.position);
        }
        parede.transform.localScale = new Vector3(parede.transform.localScale.x, parede.transform.localScale.y, distance);
        direction2 = parede.transform.eulerAngles;
        pontoFinal2 = endPoint(parede.transform.position, distance, direction2.y);

        
        

    }
    //### construção de porta
    void doorCreation()
    {
        bool primaryButtonAction = false;
        if (controleEsquerdo.TryGetFeatureValue(CommonUsages.primaryButton, out primaryButtonAction) && primaryButtonAction && construirPorta)
        {
            //criar ponto inicial PORTA
            construirPorta = false;
            construirParede = false;
            construirJanela = false;
            cont = false;
            acao = "modificarParedePorta";
            pontoInicial = Instantiate(pontoInicial, pontoFinal2, parede.transform.rotation);
            pontoFinal = Instantiate(pontoFinal, hit.point, new Quaternion(0, 0, 0, 1));
            paredePorta = Instantiate(paredePorta, pontoInicial.transform.position, parede.transform.rotation);
        }
    }
    void doorTransformation()
    {
        construirPorta = true;
        pontoFinal.transform.position = snap(hit.point);

        /*if (anguloLivre)
        {
            pontoInicial.transform.LookAt(pontoFinal.transform.position);
            pontoFinal.transform.LookAt(pontoInicial.transform.position);
        }*/

        float distance = Vector3.Distance(pontoInicial.transform.position, pontoFinal.transform.position);
        //paredePorta.transform.position = pontoInicial.transform.position + distance / 2 * pontoInicial.transform.forward;

        /*if (anguloLivre)
        {
            paredePorta.transform.LookAt(pontoFinal.transform.position);
        }*/
        paredePorta.transform.localScale = new Vector3(paredePorta.transform.localScale.x, paredePorta.transform.localScale.y, distance);
        direction2 = paredePorta.transform.eulerAngles;
        pontoFinal2 = endPoint(paredePorta.transform.position, distance, direction2.y);
    }


    // Update is called once per frame
    void Update()
    {
        OnEnable();
        raycastCollision();

        if (Physics.Raycast(theRay, out hit, range))
        {
            if (ferramentaAtiva.Equals("construção"))
            {
                modoConstrucao = getButtonPressed();
                switch (modoConstrucao)
                {
                    case "criarParede":
                        wallCreation();
                        break;
                    case "modificarParede":
                        wallTransformation();
                        break;
                    case "criarParedePorta":
                        doorCreation();
                        break;
                    case "modificarParedePorta":
                        doorTransformation();
                        break;
                    case "criarParedeJanela":
                        break;
                    case "modificarParedeJanela":
                        break;
                }
            }
            
            if (ferramentaAtiva.Equals("selecao"))
            {
                print("modo seleção");
                selectObject("parede");
                if (followHit)
                {
                    print("modificando seleção");
                    selectedObject.transform.parent.position = hit.point;
                }
                

            }
        }



        if (cont)
        {
            //finalizador
            pontoInicial.transform.localScale = new Vector3(0, 0, 0);
            pontoFinal.transform.localScale = new Vector3(0, 0, 0);
            triggerOn = true; //libera o uso do trigger
            countTriggerOn = 0; //libera delay do trigger
            cont = false; //tranca o finalizador
            anguloLivre = false; //tranca a rotação
            
        }
    }

    public void Reinstantiate()
    {
        for (int i = 0; i < savebleObjects.Count; i++)
        {
            for (int z = 0; z < placebleObjects.Length; z++)
            {
                if (savebleObjects[i].id == placebleObjects[z].id)
                {
                    GameObject obj = Instantiate(placebleObjects[z].prefab);
                    obj.transform.position = savebleObjects[i].ReturnPosition();
                    obj.transform.rotation = savebleObjects[i].ReturnRotation();
                    obj.transform.parent = parent;

                }
            }
        }
    }
}





/*
if (hit.collider.tag == "Bola Azul")
{
    //print("Bola Azul");
}*/

