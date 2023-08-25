using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.UI;

    public class UIControl : MonoBehaviour
    {
        public Slider SA;
        public Slider SB;
        //public Slider SC;
        public Slider SD;
        public TMP_Text SAText;
        public TMP_Text SBText;
        public TMP_Text SDText;

        public Image StickL;
        public Image StickR;
        public Vector3 InitPosL;
        public Vector3 InitPosR; 
        public float LimitPosX;
        public float LimitPosY;
        public TMP_Text THR;
        public TMP_Text RUD;
        public TMP_Text AIL;
        public TMP_Text ELE;
        
        public TMP_Text Device;

        public TMP_Dropdown COM;
        
        public TMP_Text text;
        public ScrollRect scrollRect;
        public int counter;
        public string oldLog;

        public Text stop;

        private static UIControl _instance;
        
        public static UIControl Instance()
        {
            if (_instance == null)
            {
                _instance = FindObjectOfType<UIControl>();
            }

            return _instance;
        }
        private void Awake()
        {
            SA.value = 0;
            SB.value = 0;
            //SC.value = 0;
            SD.value = 0;
            InitPosL = StickL.rectTransform.anchoredPosition;
            InitPosR = StickR.rectTransform.anchoredPosition;
            LimitPosX = 100;
            LimitPosY = 80;
            COM.ClearOptions();
            counter = 0;
            oldLog = null;
        }

        public void SetSlider(float sa, float sb,  float sd)
        {
            SA.value = sa;
            SB.value = -sb;
            //SC.value = -sc;
            SD.value = -sd;
        }
        public void SetTMP(float sa, float sb,  float sd)
        {
            SAText.text = sa.ToString("N");
            SBText.text = (-sb).ToString("N");
            //SC.value = -sc;
            SDText.text = (-sd).ToString("N");
        }

        public void SetStick(float thr, float rud, float ail, float ele)
        {
            /*
            StickL.rectTransform.position =new Vector3(InitPosL.x + LimitPosX * rud,InitPosL.y + LimitPosY * thr,InitPosL.z ) ;
            StickR.rectTransform.position =new Vector3(InitPosR.x + LimitPosX * ail, InitPosR.y -LimitPosY * ele, InitPosR.z);
            Debug.Log("x "+(InitPosR.x + LimitPosX * ail)+" y "+(InitPosR.y -LimitPosY * ele));*/
            StickL.rectTransform.anchoredPosition =new Vector3(InitPosL.x+ LimitPosX * rud ,InitPosL.y+ LimitPosY * thr ,InitPosL.z ) ;
            StickR.rectTransform.anchoredPosition =new Vector3(InitPosR.x+ LimitPosX * ail , InitPosR.y-LimitPosY * ele, InitPosR.z);
            
        }
        
        public void SetTMPStick(float thr, float rud, float ail, float ele)
        {
            THR.text = thr.ToString("f3");
            RUD.text = rud.ToString("f3");
            AIL.text = ail.ToString("f3");
            ELE.text = (-ele).ToString("f3");
        }

        public void SetDevice(TX16SControls controller)
        {
            if (Joystick.current.device != null)
            {
                Device.text = "Device:" + Joystick.current.device;
            }
            else
            {
                Device.text = "Device:" + "None";
            }
        }

        public void SetCom(string[] portArray)
        {
            if(COM.options!=null)COM.ClearOptions();
            List<string> port = new List<string>(portArray);
            if (port != null) COM.AddOptions(port);
        }

        public string GetCom()
        {
            return COM.captionText.text;
        }

        public void SetLog(int[] send,bool isConsole,string log=null)
        {
            /*if(text.text.Length==4)text.text=text.text.Remove(0,4 );
            text.text += log;
            if (text.text.Length > 319)
            {
                text.text=text.text.Remove(0,29 );
            }
            scrollRect.verticalNormalizedPosition = 0;*/
            if (!isConsole)
            {
                text.text="ch1: "+send[0]+"\n"+
                          "ch2: "+send[1]+"\n"+
                          "ch3: "+send[2]+"\n"+
                          "ch4: "+send[3]+"\n"+
                          "ch5: "+send[4]+"\n"+
                          "ch6: "+send[5]+"\n"+
                          "ch7: "+send[6]+"\n"+
                          "ch8: "+send[7]+"\n";
            }
            else
            {
                if (log != oldLog)
                {
                    text.text += log;
                    oldLog = log;
                }
            }
            
        }
    
    }

