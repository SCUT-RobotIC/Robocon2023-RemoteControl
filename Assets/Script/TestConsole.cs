using UnityEngine;

    class TestConsole : MonoBehaviour
    {
        public UIControl TestUI;
        public string log;

        private void Awake()
        {
            TestUI = UIControl.Instance();//单例
        }

        void OnEnable()
        {
            Application.logMessageReceived += HandleLog;
        }

        void OnDisable()
        {
            Application.logMessageReceived -= HandleLog;
        }

        void OnDestroy()
        {
            Application.logMessageReceived -= HandleLog;
        }

        /// <summary>
        /// Records a log from the log callback.
        /// </summary>
        /// <param name="message">Message.</param>
        /// <param name="stackTrace">Trace of where the message came from.</param>
        /// <param name="type">Type of message (error, exception, warning, assert).</param>
        void HandleLog(string message, string stackTrace, LogType type)
        {
            /*
            if (Application.isEditor)
            {
                log = null;
                return;
            }*/
            
            if (type == LogType.Exception || type == LogType.Error)
            {
                log=type.ToString() + ":" + message + "\n stack: " + stackTrace;
                TestUI.SetLog(null,true,log);
            }
            else if (type == LogType.Log)
            {
                log=message;
                //TestUI.SetLog(log);
            }
        }
    }

