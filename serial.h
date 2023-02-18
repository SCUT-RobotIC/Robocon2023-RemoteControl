#ifndef SERIAL_H
#define SERIAL_H
#include <QSerialPort>
#include <QSerialPortInfo>

#include <QLibrary>
//#include <QDebug>
#include <QString>
class MySerial : public QObject
{
    Q_OBJECT
public:
    MySerial(QString portName = "ttyUSB1", QObject *parent = nullptr);
    ~MySerial();
    bool WriteToSerial(QByteArray cmd);
    QByteArray ReadFromSerial();
    bool SerialIsOpen() { return m_SerialPort->isOpen(); }
    bool closeSerial();
    bool changeBaudrate(int baudrate);
    bool openSerial();
    void setPortName(QString portName);
signals:
    void sig_SendTipInfo(bool result, QString info);
    void sig_SendReadData(QByteArray data);

private:
    QSerialPort *m_SerialPort = nullptr;
};
#endif // SERIAL_H
