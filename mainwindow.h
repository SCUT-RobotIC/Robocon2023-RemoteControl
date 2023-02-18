#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "joy_thread.h"
#include "serial.h"
namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void display_slot_row(joyinfoex_tag state_row);

    //void on_serial_comboBox_currentIndexChanged(int index);

    //void on_serial_comboBox_currentIndexChanged(const QString &arg1);

    void on_serial_comboBox_currentTextChanged(const QString &arg1);

    void on_pushButton_clicked();

private:
    MySerial SerialPort;
    QByteArray SerialCommand;
    void clearDisplay();
    Ui::MainWindow *ui;
    bool serialOpen=false;
};
QByteArray Parser(joyinfoex_tag state_row);

#endif // MAINWINDOW_H
