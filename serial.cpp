#include "serial.h"
MySerial::MySerial(QString portName, QObject *parent) :
    QObject(parent)
{
    m_SerialPort = new QSerialPort();
    m_SerialPort->setPortName(portName);                //设置串行端口的名称
    m_SerialPort->setBaudRate(QSerialPort::Baud115200); //波特率：115200 bps
    m_SerialPort->setDataBits(QSerialPort::Data8);      //数据位：8 位
    m_SerialPort->setStopBits(QSerialPort::OneStop);    //停止位：1 位
    m_SerialPort->setParity(QSerialPort::NoParity);     //校验位：无
    m_SerialPort->setFlowControl(QSerialPort::NoFlowControl);
    //qDebug() << "Port Name:" << portName;
    if(!m_SerialPort->open(QIODevice::ReadWrite))
    {
        emit sig_SendTipInfo(false, "opened failed");
        //qDebug() << "open failed";
    }
    //else qDebug() << "open successfully";
}

MySerial::~MySerial()
{
    m_SerialPort->clear();    //丢弃缓冲区中的所有字符， 同时终止挂起的读取或写入操作
    m_SerialPort->close();
    m_SerialPort->deleteLater();
}

bool MySerial::WriteToSerial(QByteArray cmd)
{
    if(cmd.isEmpty()) return false;
//    qDebug() << "[ == MySerial == ] Send Data:" << cmd.toHex();
    this->m_SerialPort->clear();
    this->m_SerialPort->write(cmd);
    this->m_SerialPort->flush();    //尽可能多地从内部写缓冲区写入底层串口而不阻塞
    this->m_SerialPort->waitForBytesWritten(10);
    return true;
}

QByteArray MySerial::ReadFromSerial()
{
    QByteArray readData;
    this->m_SerialPort->waitForReadyRead(5);
    readData.append(this->m_SerialPort->readAll());
    while (this->m_SerialPort->waitForReadyRead(5)) readData.append(this->m_SerialPort->readAll());
    if(readData.isEmpty()) return QByteArray();
//    qDebug() << "[ == MySerial == ] Read Data:" << readData.toHex();
    return readData;
}

bool MySerial::closeSerial()
{
    if(!m_SerialPort->isOpen()) return false;
    m_SerialPort->clear();
    m_SerialPort->close();
    return true;
}
void MySerial::setPortName(QString portName){
    m_SerialPort->setPortName(portName);
}
bool MySerial::openSerial()
{
    if(m_SerialPort->isOpen()) return false;

    m_SerialPort->open(QIODevice::ReadWrite);
    return true;
}
