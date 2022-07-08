using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.XR;

public class Joystick : MonoBehaviour
{
    //jMenu / jTrigger / jGrip / jPrimaruButton / jSecondButton
    public JoystickButtons jMenu = new JoystickButtons(ButtonName.MENU);
    public JoystickButtons jTrigger = new JoystickButtons(ButtonName.TRIGGER);
    public JoystickButtons jGrip = new JoystickButtons(ButtonName.GRIP);
    public JoystickButtons jPrimaryButton = new JoystickButtons(ButtonName.PRIMARYBUTTON);
    public JoystickButtons jSecondaryButton = new JoystickButtons(ButtonName.SECONDARYBUTTON);
    public XRNode xrNode;
    private List<InputDevice> device = new List<InputDevice>();
    private InputDevice joystick;

    void GetDevice()
    {
        InputDevices.GetDevicesAtXRNode(xrNode, device);
        joystick = device. FirstOrDefault();
    }

    public List<JoystickButtons> GetButtons()
    {
        List<JoystickButtons> buttonList = new List<JoystickButtons>();
        buttonList.Add(jMenu);
        buttonList.Add(jTrigger);
        buttonList.Add(jGrip);
        buttonList.Add(jPrimaryButton);
        buttonList.Add(jSecondaryButton);
        return buttonList;
    }
    public void SetButtonActive()
    {
        joystick.TryGetFeatureValue(CommonUsages.menuButton, out jMenu.bActive);
        joystick.TryGetFeatureValue(CommonUsages.triggerButton, out jTrigger.bActive);
        joystick.TryGetFeatureValue(CommonUsages.gripButton, out jGrip.bActive);
        joystick.TryGetFeatureValue(CommonUsages.primaryButton, out jPrimaryButton.bActive);
        joystick.TryGetFeatureValue(CommonUsages. secondaryButton, out jSecondaryButton.bActive);
    }

    void TestarInput()
    {
        List<JoystickButtons> buttonList = GetButtons();
        for (int i = 0; i < buttonList.Count; i++)
        {
            if (buttonList[i].bActive)
            {
                print(buttonList[i].buttonName + " " + xrNode + " Pressionado");
            }
        }
    }
    public void SetButtonDelay()
    {
        List<JoystickButtons> buttonList = GetButtons();
        for (int i = 0; i < buttonList.Count; i++)
        {
            if (buttonList[i].bActive)
            {
                buttonList[i].SetDelay();
            }
        }
    }
    public void LockAllButSome(ButtonName[] button)
    {
        List<JoystickButtons> buttonList = GetButtons();
        for (int i = 0; i < buttonList.Count; i++)
        {
            for (int i2 = 0; i2 < button.Length; i2++) {
                if (buttonList[i].buttonName != button[i2])
                {
                    buttonList[i].LockButton();
                }
            }
        }
    }
    public void LockAllButOne(ButtonName button)
    {
        List<JoystickButtons> buttonList = GetButtons();
        for (int i = 0; i < buttonList.Count; i++)
        {
            if (buttonList[i].buttonName != button)
            {
                buttonList[i].LockButton();
            }
        }
    }    public void LockAll()
    {
        List<JoystickButtons> buttonList = GetButtons();
        for (int i = 0; i < buttonList.Count; i++)
        {
            buttonList[i].LockButton();
        }
    }
    public void LockOnly(ButtonName button)
    {
        List<JoystickButtons> buttonList = GetButtons();
        for (int i = 0; i < buttonList.Count; i++)
        {
            if (buttonList[i].buttonName == button)
            {
                buttonList[i].LockButton();
            }
        }
    }

    public void UnlockAll()
    {
        List<JoystickButtons> buttonList = GetButtons();
        for (int i = 0; i < buttonList.Count; i++)
        {
            buttonList[i].UnLockButton();
        }
    }


    public void DecreaseButtonDelay()
    {
        List<JoystickButtons> buttonList = GetButtons();
        for (int i = 0; i < buttonList.Count; i++)
        {
             buttonList[i].DecreaseDelay();
        }
    }

    public void OnEnable()
    {
        if (!joystick.isValid)
        {
            GetDevice();
        }
    }

}




public class JoystickButtons
{
    public ButtonName buttonName;
    public bool bActive = false;
    private bool bLock = false;
    private int bLongPressingDelay = 0;
    private int bDelay = 0;
    private bool bSecondAction = false;
    public int defaultDelay = 15;
    public int defaultLongPressingDelay = 15;

    public JoystickButtons(ButtonName name)
    {
        this.buttonName = name;
        if (name == ButtonName.PRIMARYBUTTON || name == ButtonName.SECONDARYBUTTON)
        {
            SetLongPressingDelay();
        }
    }
    public void SetDelay()
    {
        this.bDelay = this.defaultDelay;
    }
    public void SetLongPressingDelay()
    {
        this.bLongPressingDelay = this.defaultLongPressingDelay;
    }
    public bool IsLongPressingDelayed()
    {
        this.bLongPressingDelay--;
        if (this.bLongPressingDelay == 0)
        {
            return false;
        }
        return true;
    }
    public void DecreaseDelay()
    {
        if (this.bDelay > 0)
        {
            this.bDelay--;
        }
    }
    public void DecreaseLongPressingDelay()
    {
        if (bLongPressingDelay > 0)
        {
            bLongPressingDelay--;
        }
    }

    public bool SecondAction()
    {
        bool result = this.bSecondAction;
        this.bSecondAction = !this.bSecondAction;
        return result;
    }

    public bool DelayInactive()
    {
        if (bDelay == 0)
        {
            return true;
        }
        return false;
    }
    
    public void LockButton()
    {
        if(this.buttonName != ButtonName.MENU)
        {
            this. bLock = true;
        }
    }

    public void UnLockButton()
    {
        this.bLock = false;
    }
    public bool IsLocked()
    {
        return this.bLock;
    }
    public bool IsActive()
    {
        return this.bActive;
    }
}

public enum ButtonName
{
    MENU,
    TRIGGER,
    GRIP,
    PRIMARYBUTTON,
    SECONDARYBUTTON
}