/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QWidget *centralWidget;
    QCheckBox *checkBox;
    QLabel *label;
    QCheckBox *checkBox_2;
    QPushButton *startButton;
    QDateEdit *dateEdit;
    QLabel *resultLabel;
    QPushButton *resetButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(535, 335);
        MainWindow->setMinimumSize(QSize(535, 300));
        MainWindow->setStyleSheet(QLatin1String("QMainWindow\n"
"{\n"
"background-color: #769bce\n"
"}\n"
"\n"
"QDateEdit\n"
"{\n"
"	setAlignment: center;\n"
"	font-size: 18px;\n"
"	\n"
"    background-color: white; \n"
"}\n"
"QDateEdit::up-button\n"
"{\n"
"	size: 15px\n"
"}\n"
"QDateEdit::down-button\n"
"{\n"
"	size: 15px\n"
"}\n"
"\n"
"QCheckBox\n"
"{\n"
"		setAlignment: center;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	color: #333;\n"
"	border: 2px solid #555;\n"
"	border-radius: 11px;\n"
"	padding: 5px;\n"
"	background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"	fx: 0.3, fy: -0.4,\n"
"	radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"	min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(170, 140, 191, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 20, 391, 51));
        QFont font;
        font.setPointSize(37);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QLatin1String("QLabel \n"
"{ background-color : #769bce; color : #fff; \n"
"}"));
        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(170, 160, 191, 20));
        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(160, 200, 211, 51));
        dateEdit = new QDateEdit(centralWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(220, 80, 91, 41));
        dateEdit->setAlignment(Qt::AlignCenter);
        dateEdit->setReadOnly(false);
        dateEdit->setAccelerated(false);
        dateEdit->setMaximumDate(QDate(7999, 12, 31));
        resultLabel = new QLabel(centralWidget);
        resultLabel->setObjectName(QStringLiteral("resultLabel"));
        resultLabel->setEnabled(true);
        resultLabel->setGeometry(QRect(-10, 270, 551, 51));
        QFont font1;
        font1.setPointSize(44);
        resultLabel->setFont(font1);
        resultLabel->setLayoutDirection(Qt::LeftToRight);
        resultLabel->setAlignment(Qt::AlignCenter);
        resetButton = new QPushButton(centralWidget);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        resetButton->setGeometry(QRect(390, 210, 121, 31));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        checkBox->setText(QApplication::translate("MainWindow", "Same For Every Year", 0));
        label->setText(QApplication::translate("MainWindow", "Is Today Your Birthday?", 0));
        checkBox_2->setText(QApplication::translate("MainWindow", "Take Equinox Into Account", 0));
        startButton->setText(QApplication::translate("MainWindow", "Start Complex Algorithm", 0));
        resultLabel->setText(QApplication::translate("MainWindow", "Today Is Your Birthday", 0));
        resetButton->setText(QApplication::translate("MainWindow", "Reset", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
