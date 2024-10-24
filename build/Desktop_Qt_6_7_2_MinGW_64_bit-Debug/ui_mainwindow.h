/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *capacidad;
    QDial *kin;
    QDial *kout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *time_out;
    QLineEdit *qin;
    QLineEdit *qout;
    QProgressBar *tanque;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        capacidad = new QLineEdit(centralwidget);
        capacidad->setObjectName("capacidad");
        capacidad->setGeometry(QRect(340, 310, 113, 22));
        kin = new QDial(centralwidget);
        kin->setObjectName("kin");
        kin->setGeometry(QRect(160, 50, 50, 64));
        kin->setNotchTarget(10.000000000000000);
        kin->setNotchesVisible(true);
        kout = new QDial(centralwidget);
        kout->setObjectName("kout");
        kout->setGeometry(QRect(470, 190, 50, 64));
        kout->setNotchTarget(10.000000000000000);
        kout->setNotchesVisible(true);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 310, 101, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 100, 49, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(150, 30, 81, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 330, 91, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(590, 240, 49, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(460, 170, 81, 20));
        time_out = new QLineEdit(centralwidget);
        time_out->setObjectName("time_out");
        time_out->setGeometry(QRect(50, 300, 113, 22));
        qin = new QLineEdit(centralwidget);
        qin->setObjectName("qin");
        qin->setGeometry(QRect(30, 70, 113, 22));
        qout = new QLineEdit(centralwidget);
        qout->setObjectName("qout");
        qout->setGeometry(QRect(550, 210, 113, 22));
        tanque = new QProgressBar(centralwidget);
        tanque->setObjectName("tanque");
        tanque->setGeometry(QRect(260, 60, 171, 231));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tanque->sizePolicy().hasHeightForWidth());
        tanque->setSizePolicy(sizePolicy);
        tanque->setValue(0);
        tanque->setOrientation(Qt::Orientation::Vertical);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "capacidad [Litros]", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Qin [L/s]", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Kin [0 - 100%]", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Timeout (mSeg)", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Qout [L/s]", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Kout [0 - 100%]", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
