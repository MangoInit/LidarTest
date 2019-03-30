/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *help;
    QWidget *centralWidget;
    QPushButton *pushButton_start;
    QPushButton *pushButton_finish;
    QPushButton *pushButton_connect;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(501, 509);
        help = new QAction(MainWindow);
        help->setObjectName(QStringLiteral("help"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_start = new QPushButton(centralWidget);
        pushButton_start->setObjectName(QStringLiteral("pushButton_start"));
        pushButton_start->setEnabled(false);
        pushButton_start->setGeometry(QRect(70, 110, 121, 51));
        QFont font;
        font.setPointSize(14);
        pushButton_start->setFont(font);
        pushButton_finish = new QPushButton(centralWidget);
        pushButton_finish->setObjectName(QStringLiteral("pushButton_finish"));
        pushButton_finish->setEnabled(false);
        pushButton_finish->setGeometry(QRect(70, 180, 121, 51));
        pushButton_finish->setFont(font);
        pushButton_connect = new QPushButton(centralWidget);
        pushButton_connect->setObjectName(QStringLiteral("pushButton_connect"));
        pushButton_connect->setGeometry(QRect(60, 20, 141, 61));
        pushButton_connect->setFont(font);
        pushButton_connect->setCheckable(true);
        pushButton_connect->setChecked(false);
        pushButton_connect->setAutoRepeat(false);
        pushButton_connect->setAutoExclusive(false);
        pushButton_connect->setAutoDefault(false);
        pushButton_connect->setFlat(false);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 26, 101, 31));
        QFont font1;
        font1.setPointSize(13);
        label->setFont(font1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 80, 101, 41));
        label_2->setFont(font1);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(290, 140, 101, 41));
        label_3->setFont(font1);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(290, 200, 101, 41));
        label_4->setFont(font1);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(290, 260, 101, 41));
        label_5->setFont(font1);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(290, 320, 101, 31));
        label_6->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 501, 28));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(help);

        retranslateUi(MainWindow);

        pushButton_connect->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        help->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0));
        pushButton_start->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213", 0));
        pushButton_start->setShortcut(QApplication::translate("MainWindow", "Left", 0));
        pushButton_finish->setText(QApplication::translate("MainWindow", "\347\273\223\346\235\237", 0));
        pushButton_finish->setShortcut(QApplication::translate("MainWindow", "Right", 0));
        pushButton_connect->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245", 0));
        label->setText(QApplication::translate("MainWindow", "0.5m\350\267\235\347\246\273", 0));
        label_2->setText(QApplication::translate("MainWindow", "1.0m\350\267\235\347\246\273", 0));
        label_3->setText(QApplication::translate("MainWindow", "\345\237\272\347\253\231\350\257\206\345\210\253", 0));
        label_4->setText(QApplication::translate("MainWindow", "0.12m\350\267\235\347\246\273", 0));
        label_5->setText(QApplication::translate("MainWindow", "\345\205\211\345\274\272\346\250\241\345\274\217", 0));
        label_6->setText(QApplication::translate("MainWindow", "\346\255\243\345\270\270\346\250\241\345\274\217", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
