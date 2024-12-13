/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QDoubleSpinBox *spinBox;
    QLabel *labelSquare;
    QPushButton *buttonRight;
    QPushButton *buttonLeft;
    QDateEdit *dateEdit;
    QCalendarWidget *calendarWidget;
    QGroupBox *groupBox;
    QRadioButton *radioFirst;
    QRadioButton *radioSecond;
    QRadioButton *radioThird;
    QSlider *sliderRed;
    QSpinBox *spinBoxRed;
    QSlider *sliderGreen;
    QSpinBox *spinBoxGreen;
    QSlider *sliderBlue;
    QSpinBox *spinBoxBlue;
    QLabel *colorPreview;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        spinBox = new QDoubleSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(440, 90, 62, 22));
        labelSquare = new QLabel(centralwidget);
        labelSquare->setObjectName("labelSquare");
        labelSquare->setGeometry(QRect(320, 90, 111, 21));
        labelSquare->setAlignment(Qt::AlignCenter);
        buttonRight = new QPushButton(centralwidget);
        buttonRight->setObjectName("buttonRight");
        buttonRight->setGeometry(QRect(530, 90, 75, 24));
        buttonLeft = new QPushButton(centralwidget);
        buttonLeft->setObjectName("buttonLeft");
        buttonLeft->setEnabled(false);
        buttonLeft->setGeometry(QRect(620, 90, 75, 24));
        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(480, 160, 110, 22));
        dateEdit->setCalendarPopup(true);
        calendarWidget = new QCalendarWidget(centralwidget);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(380, 190, 312, 190));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 420, 161, 131));
        radioFirst = new QRadioButton(groupBox);
        radioFirst->setObjectName("radioFirst");
        radioFirst->setGeometry(QRect(10, 20, 89, 20));
        radioFirst->setChecked(true);
        radioSecond = new QRadioButton(groupBox);
        radioSecond->setObjectName("radioSecond");
        radioSecond->setGeometry(QRect(10, 50, 89, 20));
        radioThird = new QRadioButton(groupBox);
        radioThird->setObjectName("radioThird");
        radioThird->setGeometry(QRect(10, 80, 89, 20));
        sliderRed = new QSlider(centralwidget);
        sliderRed->setObjectName("sliderRed");
        sliderRed->setGeometry(QRect(180, 400, 160, 22));
        sliderRed->setMaximum(255);
        sliderRed->setOrientation(Qt::Horizontal);
        spinBoxRed = new QSpinBox(centralwidget);
        spinBoxRed->setObjectName("spinBoxRed");
        spinBoxRed->setGeometry(QRect(370, 400, 42, 22));
        spinBoxRed->setMaximum(255);
        sliderGreen = new QSlider(centralwidget);
        sliderGreen->setObjectName("sliderGreen");
        sliderGreen->setGeometry(QRect(180, 430, 160, 22));
        sliderGreen->setMaximum(255);
        sliderGreen->setOrientation(Qt::Horizontal);
        spinBoxGreen = new QSpinBox(centralwidget);
        spinBoxGreen->setObjectName("spinBoxGreen");
        spinBoxGreen->setGeometry(QRect(370, 430, 42, 22));
        spinBoxGreen->setMaximum(255);
        sliderBlue = new QSlider(centralwidget);
        sliderBlue->setObjectName("sliderBlue");
        sliderBlue->setGeometry(QRect(180, 460, 160, 22));
        sliderBlue->setMaximum(255);
        sliderBlue->setOrientation(Qt::Horizontal);
        spinBoxBlue = new QSpinBox(centralwidget);
        spinBoxBlue->setObjectName("spinBoxBlue");
        spinBoxBlue->setGeometry(QRect(370, 460, 42, 22));
        spinBoxBlue->setMaximum(255);
        colorPreview = new QLabel(centralwidget);
        colorPreview->setObjectName("colorPreview");
        colorPreview->setGeometry(QRect(460, 400, 111, 91));
        colorPreview->setStyleSheet(QString::fromUtf8("background-color: black;"));
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
        labelSquare->setText(QString());
        buttonRight->setText(QCoreApplication::translate("MainWindow", "prawy", nullptr));
        buttonLeft->setText(QCoreApplication::translate("MainWindow", "lewy", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        radioFirst->setText(QCoreApplication::translate("MainWindow", "pierwszy", nullptr));
        radioSecond->setText(QCoreApplication::translate("MainWindow", "drugi", nullptr));
        radioThird->setText(QCoreApplication::translate("MainWindow", "trzeci", nullptr));
        colorPreview->setText(QCoreApplication::translate("MainWindow", "colorPreview", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
