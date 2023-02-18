#include "mainwindow.h"

#include "ui_mainwindow.h"

static Joy_Thread *joy_thread;

const QString BTN_color("background-color: rgb(255, 32, 85);");

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{



    QStringList m_serialPortName;
    foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
    {
        m_serialPortName << info.portName();//获取可用串口信息


        //qDebug()<<"serialPortName:"<<info.portName();
    }
    SerialPort.setPortName(m_serialPortName[0]);
    SerialPort.openSerial();
    SerialCommand.resize(0);

    //QSerialPort *dulplex_port=new QSerialPort;
    ui->setupUi(this);
    ui->serial_comboBox->addItems(m_serialPortName);//寻找已经打开的串口
    joy_thread = new Joy_Thread();
    qRegisterMetaType<joyinfoex_tag>("joyinfoex_tag");//注册一种信号的参数类型
    connect(joy_thread, SIGNAL(JoySignal_row(joyinfoex_tag)), this, SLOT(display_slot_row(joyinfoex_tag)));
    joy_thread->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clearDisplay()
{
    ui->PB_A->setStyleSheet("");
    ui->PB_B->setStyleSheet("");
    ui->PB_X->setStyleSheet("");
    ui->PB_Y->setStyleSheet("");

    ui->PB_LB->setStyleSheet("");
    ui->PB_LT->setStyleSheet("");
    ui->PB_RB->setStyleSheet("");
    ui->PB_RT->setStyleSheet("");

    ui->POV_F->setStyleSheet("");
    ui->POV_B->setStyleSheet("");
    ui->POV_L->setStyleSheet("");
    ui->POV_R->setStyleSheet("");

    ui->PB_BACK->setStyleSheet("");
    ui->PB_START->setStyleSheet("");

    ui->SK_LU->setStyleSheet("");
    ui->SK_LD->setStyleSheet("");
    ui->SK_LR->setStyleSheet("");
    ui->SK_LL->setStyleSheet("");
    ui->PB_LP->setStyleSheet("");

    ui->SK_RU->setStyleSheet("");
    ui->SK_RD->setStyleSheet("");
    ui->SK_RL->setStyleSheet("");
    ui->SK_RR->setStyleSheet("");
    ui->PB_RP->setStyleSheet("");
}


void MainWindow::display_slot_row(joyinfoex_tag state_row)
{
    SerialCommand.clear();
    QString s;
    s.append("dwSize=").append(QString::number(state_row.dwSize)).append("\n");
    s.append("dwFlags=").append(QString::number(state_row.dwFlags)).append("\n");
    s.append("dwXpos=").append(QString::number(state_row.dwXpos)).append("\n");
    s.append("dwYpos=").append(QString::number(state_row.dwYpos)).append("\n");
    s.append("dwZpos=").append(QString::number(state_row.dwZpos)).append("\n");
    s.append("dwRpos=").append(QString::number(state_row.dwRpos)).append("\n");
    s.append("dwUpos=").append(QString::number(state_row.dwUpos)).append("\n");
    s.append("dwVpos=").append(QString::number(state_row.dwVpos)).append("\n");
    s.append("dwButtons=").append(QString::number(state_row.dwButtons)).append("\n");
    s.append("dwButtonNumber=").append(QString::number(state_row.dwButtonNumber)).append("\n");
    s.append("dwPOV=").append(QString::number(state_row.dwPOV)).append("\n");
    s.append("dwReserved1=").append(QString::number(state_row.dwReserved1)).append("\n");
    s.append("dwReserved2=").append(QString::number(state_row.dwReserved2)).append("\n");
    if(serialOpen){
        SerialCommand.append(QString::number(state_row.dwSize).toUtf8()).append("\n");
        SerialCommand.append(QString::number(state_row.dwFlags).toUtf8()).append("\n");
        SerialCommand.append(QString::number(state_row.dwXpos).toUtf8()).append("\n");
        SerialCommand.append(QString::number(state_row.dwYpos).toUtf8()).append("\n");
        SerialCommand.append(QString::number(state_row.dwZpos).toUtf8()).append("\n");
        SerialCommand.append(QString::number(state_row.dwRpos).toUtf8()).append("\n");
        SerialCommand.append(QString::number(state_row.dwUpos).toUtf8()).append("\n");
        SerialCommand.append(QString::number(state_row.dwVpos).toUtf8()).append("\n");
        SerialCommand.append(QString::number(state_row.dwButtons).toUtf8()).append("\n");
        SerialCommand.append(QString::number(state_row.dwButtonNumber).toUtf8()).append("\n");
        SerialCommand.append(QString::number(state_row.dwPOV).toUtf8()).append("\n");
        SerialCommand.append(QString::number(state_row.dwReserved1).toUtf8()).append("\n");
        SerialCommand.append(QString::number(state_row.dwReserved2).toUtf8()).append("\n");

        if(!SerialPort .WriteToSerial(SerialCommand)){
            s.append("send fail!\n");
        }
    s.append(SerialPort.ReadFromSerial());
    }
    ui->textEdit->setText(s);

    clearDisplay();

    QString select = ui->comboBox->currentText();

    if(0 == select.compare("北通蝙蝠3_蓝牙")) {
        if(state_row.dwXpos > 65000) {
            ui->SK_LR->setStyleSheet(BTN_color);

        } else if(state_row.dwXpos < 500) {
            ui->SK_LL->setStyleSheet(BTN_color);
        }

        if(state_row.dwYpos > 65000) {
            ui->SK_LD->setStyleSheet(BTN_color);

        } else if(state_row.dwYpos < 500) {
            ui->SK_LU->setStyleSheet(BTN_color);
        }

        if(state_row.dwRpos > 65000) {
            ui->SK_RD->setStyleSheet(BTN_color);

        } else if(state_row.dwRpos < 500) {
            ui->SK_RU->setStyleSheet(BTN_color);
        }

        if(state_row.dwUpos > 65000) {
            ui->SK_RR->setStyleSheet(BTN_color);

        } else if(state_row.dwUpos < 500) {
            ui->SK_RL->setStyleSheet(BTN_color);
        }

        if(state_row.dwZpos > 65000) {
            ui->PB_LT->setStyleSheet(BTN_color);

        } else if(state_row.dwZpos < 500) {
            ui->PB_RT->setStyleSheet(BTN_color);
        }

        if(state_row.dwButtons & 0x01 << 0) {
            ui->PB_A->setStyleSheet(BTN_color);
        }

        if(state_row.dwButtons & 0x01 << 1) {
            ui->PB_B->setStyleSheet(BTN_color);
        }

        if(state_row.dwButtons & 0x01 << 2) {
            ui->PB_X->setStyleSheet(BTN_color);
        }

        if(state_row.dwButtons & 0x01 << 3) {
            ui->PB_Y->setStyleSheet(BTN_color);
        }

        if(state_row.dwButtons & 0x01 << 4) {
            ui->PB_LB->setStyleSheet(BTN_color);

        }

        if(state_row.dwButtons & 0x01 << 5) {
            ui->PB_RB->setStyleSheet(BTN_color);
        }

        if(state_row.dwButtons & 0x01 << 6) {
            ui->PB_BACK->setStyleSheet(BTN_color);

        }

        if(state_row.dwButtons & 0x01 << 7) {
            ui->PB_START->setStyleSheet(BTN_color);
        }

        if(state_row.dwButtons & 0x01 << 8) {
            ui->PB_LP->setStyleSheet(BTN_color);

        }

        if(state_row.dwButtons & 0x01 << 9) {
            ui->PB_RP->setStyleSheet(BTN_color);
        }

        if(state_row.dwPOV == 0) {
            ui->POV_F->setStyleSheet(BTN_color);

        } else if(state_row.dwPOV == 9000) {
            ui->POV_R->setStyleSheet(BTN_color);

        } else if(state_row.dwPOV == 18000) {
            ui->POV_B->setStyleSheet(BTN_color);

        } else if(state_row.dwPOV == 27000) {
            ui->POV_L->setStyleSheet(BTN_color);

        } else if(state_row.dwPOV == 4500) {
            ui->POV_F->setStyleSheet(BTN_color);
            ui->POV_R->setStyleSheet(BTN_color);

        } else if(state_row.dwPOV == 31500) {
            ui->POV_F->setStyleSheet(BTN_color);
            ui->POV_L->setStyleSheet(BTN_color);

        } else if(state_row.dwPOV == 13500) {
            ui->POV_R->setStyleSheet(BTN_color);
            ui->POV_B->setStyleSheet(BTN_color);

        } else if(state_row.dwPOV == 22500) {
            ui->POV_L->setStyleSheet(BTN_color);
            ui->POV_B->setStyleSheet(BTN_color);
        }

    } else if(0 == select.compare("北通蝙蝠D2A_无线")) {

    }
}





void MainWindow::on_serial_comboBox_currentTextChanged(const QString &arg1)
{
    SerialPort.setPortName(arg1);
}




void MainWindow::on_pushButton_clicked()
{
    if(SerialPort.openSerial()){
        ui->pushButton->setText("关闭串口");
        serialOpen=true;
    }
    else if(SerialPort.closeSerial()){
        ui->pushButton->setText("打开串口");
        serialOpen=false;
    }

}

