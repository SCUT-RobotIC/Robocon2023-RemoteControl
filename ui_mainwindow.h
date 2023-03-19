/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *PB_A;
    QPushButton *PB_B;
    QPushButton *PB_X;
    QPushButton *PB_Y;
    QPushButton *POV_F;
    QPushButton *POV_L;
    QPushButton *POV_B;
    QPushButton *POV_R;
    QPushButton *SK_LD;
    QPushButton *SK_LU;
    QPushButton *SK_LL;
    QPushButton *SK_LR;
    QPushButton *SK_RD;
    QPushButton *SK_RU;
    QPushButton *SK_RL;
    QPushButton *SK_RR;
    QPushButton *PB_LP;
    QPushButton *PB_RP;
    QPushButton *PB_RB;
    QPushButton *PB_RT;
    QPushButton *PB_BACK;
    QPushButton *PB_START;
    QPushButton *PB_LT;
    QPushButton *PB_LB;
    QPushButton *PB_OTHER;
    QTextEdit *textEdit;
    QComboBox *comboBox;
    QComboBox *serial_comboBox;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1242, 758);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        PB_A = new QPushButton(centralWidget);
        PB_A->setObjectName(QStringLiteral("PB_A"));
        PB_A->setGeometry(QRect(1080, 260, 61, 51));
        PB_B = new QPushButton(centralWidget);
        PB_B->setObjectName(QStringLiteral("PB_B"));
        PB_B->setGeometry(QRect(1140, 210, 61, 51));
        PB_X = new QPushButton(centralWidget);
        PB_X->setObjectName(QStringLiteral("PB_X"));
        PB_X->setGeometry(QRect(1020, 210, 61, 51));
        PB_Y = new QPushButton(centralWidget);
        PB_Y->setObjectName(QStringLiteral("PB_Y"));
        PB_Y->setGeometry(QRect(1080, 160, 61, 51));
        POV_F = new QPushButton(centralWidget);
        POV_F->setObjectName(QStringLiteral("POV_F"));
        POV_F->setGeometry(QRect(100, 160, 61, 51));
        POV_L = new QPushButton(centralWidget);
        POV_L->setObjectName(QStringLiteral("POV_L"));
        POV_L->setGeometry(QRect(40, 210, 61, 51));
        POV_B = new QPushButton(centralWidget);
        POV_B->setObjectName(QStringLiteral("POV_B"));
        POV_B->setGeometry(QRect(100, 260, 61, 51));
        POV_R = new QPushButton(centralWidget);
        POV_R->setObjectName(QStringLiteral("POV_R"));
        POV_R->setGeometry(QRect(160, 210, 61, 51));
        SK_LD = new QPushButton(centralWidget);
        SK_LD->setObjectName(QStringLiteral("SK_LD"));
        SK_LD->setGeometry(QRect(350, 590, 61, 51));
        SK_LU = new QPushButton(centralWidget);
        SK_LU->setObjectName(QStringLiteral("SK_LU"));
        SK_LU->setGeometry(QRect(350, 490, 61, 51));
        SK_LL = new QPushButton(centralWidget);
        SK_LL->setObjectName(QStringLiteral("SK_LL"));
        SK_LL->setGeometry(QRect(290, 540, 61, 51));
        SK_LR = new QPushButton(centralWidget);
        SK_LR->setObjectName(QStringLiteral("SK_LR"));
        SK_LR->setGeometry(QRect(410, 540, 61, 51));
        SK_RD = new QPushButton(centralWidget);
        SK_RD->setObjectName(QStringLiteral("SK_RD"));
        SK_RD->setGeometry(QRect(800, 590, 61, 51));
        SK_RU = new QPushButton(centralWidget);
        SK_RU->setObjectName(QStringLiteral("SK_RU"));
        SK_RU->setGeometry(QRect(800, 490, 61, 51));
        SK_RL = new QPushButton(centralWidget);
        SK_RL->setObjectName(QStringLiteral("SK_RL"));
        SK_RL->setGeometry(QRect(740, 540, 61, 51));
        SK_RR = new QPushButton(centralWidget);
        SK_RR->setObjectName(QStringLiteral("SK_RR"));
        SK_RR->setGeometry(QRect(860, 540, 61, 51));
        PB_LP = new QPushButton(centralWidget);
        PB_LP->setObjectName(QStringLiteral("PB_LP"));
        PB_LP->setGeometry(QRect(350, 540, 61, 51));
        PB_RP = new QPushButton(centralWidget);
        PB_RP->setObjectName(QStringLiteral("PB_RP"));
        PB_RP->setGeometry(QRect(800, 540, 61, 51));
        PB_RB = new QPushButton(centralWidget);
        PB_RB->setObjectName(QStringLiteral("PB_RB"));
        PB_RB->setGeometry(QRect(950, 30, 61, 51));
        PB_RT = new QPushButton(centralWidget);
        PB_RT->setObjectName(QStringLiteral("PB_RT"));
        PB_RT->setGeometry(QRect(950, 90, 61, 51));
        PB_BACK = new QPushButton(centralWidget);
        PB_BACK->setObjectName(QStringLiteral("PB_BACK"));
        PB_BACK->setGeometry(QRect(510, 460, 61, 51));
        PB_START = new QPushButton(centralWidget);
        PB_START->setObjectName(QStringLiteral("PB_START"));
        PB_START->setGeometry(QRect(640, 460, 61, 51));
        PB_LT = new QPushButton(centralWidget);
        PB_LT->setObjectName(QStringLiteral("PB_LT"));
        PB_LT->setGeometry(QRect(220, 90, 61, 51));
        PB_LB = new QPushButton(centralWidget);
        PB_LB->setObjectName(QStringLiteral("PB_LB"));
        PB_LB->setGeometry(QRect(220, 30, 61, 51));
        PB_OTHER = new QPushButton(centralWidget);
        PB_OTHER->setObjectName(QStringLiteral("PB_OTHER"));
        PB_OTHER->setGeometry(QRect(540, 630, 121, 51));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(330, 50, 321, 371));
        textEdit->setReadOnly(true);
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(390, 0, 181, 41));
        serial_comboBox = new QComboBox(centralWidget);
        serial_comboBox->setObjectName(QStringLiteral("serial_comboBox"));
        serial_comboBox->setGeometry(QRect(670, 0, 171, 41));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(670, 70, 171, 41));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1242, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        PB_A->setText(QApplication::translate("MainWindow", "A", Q_NULLPTR));
        PB_B->setText(QApplication::translate("MainWindow", "B", Q_NULLPTR));
        PB_X->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        PB_Y->setText(QApplication::translate("MainWindow", "Y", Q_NULLPTR));
        POV_F->setText(QApplication::translate("MainWindow", "F", Q_NULLPTR));
        POV_L->setText(QApplication::translate("MainWindow", "L", Q_NULLPTR));
        POV_B->setText(QApplication::translate("MainWindow", "B", Q_NULLPTR));
        POV_R->setText(QApplication::translate("MainWindow", "R", Q_NULLPTR));
        SK_LD->setText(QApplication::translate("MainWindow", "LD", Q_NULLPTR));
        SK_LU->setText(QApplication::translate("MainWindow", "LU", Q_NULLPTR));
        SK_LL->setText(QApplication::translate("MainWindow", "LL", Q_NULLPTR));
        SK_LR->setText(QApplication::translate("MainWindow", "LR", Q_NULLPTR));
        SK_RD->setText(QApplication::translate("MainWindow", "RD", Q_NULLPTR));
        SK_RU->setText(QApplication::translate("MainWindow", "RU", Q_NULLPTR));
        SK_RL->setText(QApplication::translate("MainWindow", "RL", Q_NULLPTR));
        SK_RR->setText(QApplication::translate("MainWindow", "RR", Q_NULLPTR));
        PB_LP->setText(QApplication::translate("MainWindow", "LP", Q_NULLPTR));
        PB_RP->setText(QApplication::translate("MainWindow", "RP", Q_NULLPTR));
        PB_RB->setText(QApplication::translate("MainWindow", "RB", Q_NULLPTR));
        PB_RT->setText(QApplication::translate("MainWindow", "RT", Q_NULLPTR));
        PB_BACK->setText(QApplication::translate("MainWindow", "BACK", Q_NULLPTR));
        PB_START->setText(QApplication::translate("MainWindow", "START", Q_NULLPTR));
        PB_LT->setText(QApplication::translate("MainWindow", "LT", Q_NULLPTR));
        PB_LB->setText(QApplication::translate("MainWindow", "LB", Q_NULLPTR));
        PB_OTHER->setText(QApplication::translate("MainWindow", "PB_OTHER", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\345\214\227\351\200\232\350\235\231\350\235\2403_\350\223\235\347\211\231", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
