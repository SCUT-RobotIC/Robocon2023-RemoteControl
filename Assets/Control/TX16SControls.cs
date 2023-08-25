// GENERATED AUTOMATICALLY FROM 'Assets/Control/TX16SControls.inputactions'

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Utilities;

public class @TX16SControls : IInputActionCollection, IDisposable
{
    public InputActionAsset asset { get; }
    public @TX16SControls()
    {
        asset = InputActionAsset.FromJson(@"{
    ""name"": ""TX16SControls"",
    ""maps"": [
        {
            ""name"": ""player"",
            ""id"": ""4fa13abe-98da-4de7-bfd4-e52ff6859806"",
            ""actions"": [
                {
                    ""name"": ""THR"",
                    ""type"": ""PassThrough"",
                    ""id"": ""de3507a8-a683-4c5a-8bb7-3c71e0e8b7ef"",
                    ""expectedControlType"": """",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""RUD"",
                    ""type"": ""PassThrough"",
                    ""id"": ""988e1a8d-ebea-4d7d-ad8b-6f1029f56b3b"",
                    ""expectedControlType"": """",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""AIL"",
                    ""type"": ""PassThrough"",
                    ""id"": ""8aa80122-f4b4-47fe-a0ca-d18b4358d0f0"",
                    ""expectedControlType"": """",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""ELE"",
                    ""type"": ""PassThrough"",
                    ""id"": ""3f01c3ee-b9ea-4add-abd5-f997b4fc39bb"",
                    ""expectedControlType"": """",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""SA"",
                    ""type"": ""PassThrough"",
                    ""id"": ""6fd6a799-9a4b-402a-8d4f-27cf0da26b32"",
                    ""expectedControlType"": """",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""SB"",
                    ""type"": ""PassThrough"",
                    ""id"": ""9a831288-d6c4-4c8b-85bc-56096d78ccdf"",
                    ""expectedControlType"": """",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""SD"",
                    ""type"": ""PassThrough"",
                    ""id"": ""94699210-233b-4250-b41d-06c3da43dc18"",
                    ""expectedControlType"": """",
                    ""processors"": """",
                    ""interactions"": """"
                }
            ],
            ""bindings"": [
                {
                    ""name"": """",
                    ""id"": ""4c9c9e91-baab-47d8-8076-fc30fd730d6b"",
                    ""path"": ""<HID::OpenTX RM TX16S Joystick>/z"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""joystick"",
                    ""action"": ""THR"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""725f30bd-500f-44e1-8e88-44f73ac09582"",
                    ""path"": ""<HID::OpenTX RM TX16S Joystick>/rx"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""joystick"",
                    ""action"": ""RUD"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""3ee9179e-2526-4687-b621-3d372505847b"",
                    ""path"": ""<HID::OpenTX RM TX16S Joystick>/stick/x"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""joystick"",
                    ""action"": ""AIL"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""869e4ed1-2288-4acc-81d0-1dca2884585f"",
                    ""path"": ""<HID::OpenTX RM TX16S Joystick>/stick/y"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""joystick"",
                    ""action"": ""ELE"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""9a36541d-1778-4c5c-a12c-df844cf6f70e"",
                    ""path"": ""<HID::OpenTX RM TX16S Joystick>/ry"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""joystick"",
                    ""action"": ""SA"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""b8088047-b1d8-439b-8b9e-c3e7cba8191c"",
                    ""path"": ""<HID::OpenTX RM TX16S Joystick>/rz"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""joystick"",
                    ""action"": ""SB"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""35b8c761-2cd8-4d4b-abd0-8d13ae34ef7f"",
                    ""path"": ""<HID::OpenTX RM TX16S Joystick>/slider"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""joystick"",
                    ""action"": ""SD"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                }
            ]
        }
    ],
    ""controlSchemes"": [
        {
            ""name"": ""joystick"",
            ""bindingGroup"": ""joystick"",
            ""devices"": []
        }
    ]
}");
        // player
        m_player = asset.FindActionMap("player", throwIfNotFound: true);
        m_player_THR = m_player.FindAction("THR", throwIfNotFound: true);
        m_player_RUD = m_player.FindAction("RUD", throwIfNotFound: true);
        m_player_AIL = m_player.FindAction("AIL", throwIfNotFound: true);
        m_player_ELE = m_player.FindAction("ELE", throwIfNotFound: true);
        m_player_SA = m_player.FindAction("SA", throwIfNotFound: true);
        m_player_SB = m_player.FindAction("SB", throwIfNotFound: true);
        m_player_SD = m_player.FindAction("SD", throwIfNotFound: true);
    }

    public void Dispose()
    {
        UnityEngine.Object.Destroy(asset);
    }

    public InputBinding? bindingMask
    {
        get => asset.bindingMask;
        set => asset.bindingMask = value;
    }

    public ReadOnlyArray<InputDevice>? devices
    {
        get => asset.devices;
        set => asset.devices = value;
    }

    public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;

    public bool Contains(InputAction action)
    {
        return asset.Contains(action);
    }

    public IEnumerator<InputAction> GetEnumerator()
    {
        return asset.GetEnumerator();
    }

    IEnumerator IEnumerable.GetEnumerator()
    {
        return GetEnumerator();
    }

    public void Enable()
    {
        asset.Enable();
    }

    public void Disable()
    {
        asset.Disable();
    }

    // player
    private readonly InputActionMap m_player;
    private IPlayerActions m_PlayerActionsCallbackInterface;
    private readonly InputAction m_player_THR;
    private readonly InputAction m_player_RUD;
    private readonly InputAction m_player_AIL;
    private readonly InputAction m_player_ELE;
    private readonly InputAction m_player_SA;
    private readonly InputAction m_player_SB;
    private readonly InputAction m_player_SD;
    public struct PlayerActions
    {
        private @TX16SControls m_Wrapper;
        public PlayerActions(@TX16SControls wrapper) { m_Wrapper = wrapper; }
        public InputAction @THR => m_Wrapper.m_player_THR;
        public InputAction @RUD => m_Wrapper.m_player_RUD;
        public InputAction @AIL => m_Wrapper.m_player_AIL;
        public InputAction @ELE => m_Wrapper.m_player_ELE;
        public InputAction @SA => m_Wrapper.m_player_SA;
        public InputAction @SB => m_Wrapper.m_player_SB;
        public InputAction @SD => m_Wrapper.m_player_SD;
        public InputActionMap Get() { return m_Wrapper.m_player; }
        public void Enable() { Get().Enable(); }
        public void Disable() { Get().Disable(); }
        public bool enabled => Get().enabled;
        public static implicit operator InputActionMap(PlayerActions set) { return set.Get(); }
        public void SetCallbacks(IPlayerActions instance)
        {
            if (m_Wrapper.m_PlayerActionsCallbackInterface != null)
            {
                @THR.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnTHR;
                @THR.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnTHR;
                @THR.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnTHR;
                @RUD.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnRUD;
                @RUD.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnRUD;
                @RUD.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnRUD;
                @AIL.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnAIL;
                @AIL.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnAIL;
                @AIL.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnAIL;
                @ELE.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnELE;
                @ELE.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnELE;
                @ELE.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnELE;
                @SA.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnSA;
                @SA.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnSA;
                @SA.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnSA;
                @SB.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnSB;
                @SB.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnSB;
                @SB.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnSB;
                @SD.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnSD;
                @SD.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnSD;
                @SD.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnSD;
            }
            m_Wrapper.m_PlayerActionsCallbackInterface = instance;
            if (instance != null)
            {
                @THR.started += instance.OnTHR;
                @THR.performed += instance.OnTHR;
                @THR.canceled += instance.OnTHR;
                @RUD.started += instance.OnRUD;
                @RUD.performed += instance.OnRUD;
                @RUD.canceled += instance.OnRUD;
                @AIL.started += instance.OnAIL;
                @AIL.performed += instance.OnAIL;
                @AIL.canceled += instance.OnAIL;
                @ELE.started += instance.OnELE;
                @ELE.performed += instance.OnELE;
                @ELE.canceled += instance.OnELE;
                @SA.started += instance.OnSA;
                @SA.performed += instance.OnSA;
                @SA.canceled += instance.OnSA;
                @SB.started += instance.OnSB;
                @SB.performed += instance.OnSB;
                @SB.canceled += instance.OnSB;
                @SD.started += instance.OnSD;
                @SD.performed += instance.OnSD;
                @SD.canceled += instance.OnSD;
            }
        }
    }
    public PlayerActions @player => new PlayerActions(this);
    private int m_joystickSchemeIndex = -1;
    public InputControlScheme joystickScheme
    {
        get
        {
            if (m_joystickSchemeIndex == -1) m_joystickSchemeIndex = asset.FindControlSchemeIndex("joystick");
            return asset.controlSchemes[m_joystickSchemeIndex];
        }
    }
    public interface IPlayerActions
    {
        void OnTHR(InputAction.CallbackContext context);
        void OnRUD(InputAction.CallbackContext context);
        void OnAIL(InputAction.CallbackContext context);
        void OnELE(InputAction.CallbackContext context);
        void OnSA(InputAction.CallbackContext context);
        void OnSB(InputAction.CallbackContext context);
        void OnSD(InputAction.CallbackContext context);
    }
}
