using System;
using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Controls;
using System.IO.Ports;
using System.Linq;


public class InputManager : MonoBehaviour
    {
        public TX16SControls Controller;
        public float SAValue;
        public float SBValue;
        public float SDValue;
        public float THRValue;
        public float RUDValue;
        public float AILValue;
        public float ELEValue;
        public UIControl TestUI;
        Serial portManager;
        public string PresentCOM;
        public bool isSending;
        public int count;
        public byte[] value; 
        public int[] send;

        public float time = 0;

        //private float _intTime;
        private void Awake()
        {
            Screen.fullScreen = false;
            
            Controller = new TX16SControls();
            Controller.player.THR.performed += act => THRValue = act.ReadValue<float>();
            Controller.player.RUD.performed += act => RUDValue = act.ReadValue<float>();
            Controller.player.AIL.performed += act => AILValue = act.ReadValue<float>();
            Controller.player.ELE.performed += act => ELEValue = act.ReadValue<float>();
            Controller.player.SA.performed += act => SAValue = act.ReadValue<float>();
            Controller.player.SB.performed += act => SBValue = act.ReadValue<float>();
            Controller.player.SD.performed += act => SDValue = act.ReadValue<float>();
            
            TestUI = UIControl.Instance();//单例
            
            portManager = new Serial();
            string[] portArray = portManager.ScanPorts_TryFail();//使用试错函数，可以解决COM被占用问题
            portArray = Array.FindAll(portArray, i => i != "COM3" && i != "COM4").ToArray();
            if (portArray.Length != 0)
            {
                portManager.OpenSerialPort(portArray[0], 115200, Parity.None, 8, StopBits.One);
                TestUI.SetCom(portArray);
                PresentCOM = TestUI.GetCom();
            }
            
            
            isSending = true;
            count = 0;
            //_intTime = 0;
            value = Array.Empty<byte>();
            send = new int[8];
            StopSend();


        }

        // Update is called once per frame
        void FixedUpdate()
        {
            if (isSending)
            {
                time += Time.fixedDeltaTime;
            }
            else
            {
                time = 0;
            }
            
            //Debug.Log("SA  "+SAValue);
            PresentCOM = TestUI.GetCom();
            TestUI.SetSlider(SAValue,SBValue,SDValue);
            TestUI.SetTMP(SAValue,SBValue,SDValue);
            TestUI.SetStick(THRValue,RUDValue,AILValue,ELEValue);
            TestUI.SetTMPStick(THRValue,RUDValue,AILValue,ELEValue);
            TestUI.SetDevice(Controller);
            if (isSending && time>0.04f)
            {
                if (PresentCOM != null && PresentCOM!="COM3" && PresentCOM!="COM4")
                {
                    Send(THRValue);
                    Send(RUDValue);
                    Send(-AILValue);
                    Send(-ELEValue);
                    Send(SAValue);
                    Send(-SBValue);
                    Send(0f);
                    Send(-SDValue);
                    time = 0;
                }
            }

            /*_intTime += Time.deltaTime;
            if (_intTime >= 3f)
            {
                Scan();
                _intTime = 0;
            }*/
        }


        public void StopSend()
        {
            isSending = !isSending;
            value = Array.Empty<byte>();
            count = 0;
            if (!isSending)
            {
                TestUI.stop.text = "开始接收";
            }
            else
            {
                TestUI.stop.text = "停止接收";
            }
        }
        

        private void Send(float i)
        {
            count++;
            //Debug.Log("counter "+(count-1));
            int val = (int)(127+127*i);
            byte[] current = intToBytes(val);
            //Debug.Log("int "+val+" byte "+BitConverter.ToString(current));
            int len = value.Length;
            byte[] oldValue = value;
            value = new byte[len + current.Length];
            oldValue.CopyTo(value,0);
            current.CopyTo(value,len);

            send[count - 1] = val;
            
            if (count >= 8)
            {
                count = 0;
                //Debug.Log("len "+value.Length);
                //Debug.Log("val "+BitConverter.ToString(value));
                portManager.SendData(value,0,value.Length);
                TestUI.SetLog(send,false,null);
                value = Array.Empty<byte>();
                send = new int[8];
            }
        }
        /*private void Scan()
        {
            string[] portArray = portManager.ScanPorts_API();//使用api
            TestUI.SetCom(portArray);
        }*/
        
        public  byte[] intToBytes(int value)
        {
            byte[] src = new byte[1];
            /*src[3] = (byte)((value >> 24) & 0xFF);
            src[2] = (byte)((value >> 16) & 0xFF);
            src[1] = (byte)((value >> 8) & 0xFF);*/
            src[0] = (byte)(value & 0xFF);
            return src;
        }
        
        void OnEnable()
        {
            Controller.Enable();
        }

        void OnDisable()
        {
            Controller.Disable();
        }

        private void OnDestroy()
        {
            if(portManager.sp!=null)portManager.CloseSerialPort();
        }
    }



