/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButtonNorth;
    QPushButton *pushButtonSouth;
    QPushButton *pushButtonWest;
    QPushButton *pushButtonEast;
    QTextEdit *textEdit;
    QPushButton *pushButtonTP;
    QPushButton *pushButtonMap;
    QLabel *label;
    QPushButton *pushButtonHystory;
    QPushButton *pushButtonInfos;
    QLabel *label_health;
    QLabel *label_name;
    QPushButton *pushButton_attack;
    QTextEdit *textEdit_wordle;
    QPushButton *pushButton_validate;
    QLabel *label_wordle;
    QLabel *label_menu;
    QPushButton *pushButton_play;
    QLabel *label_game_over;
    QPushButton *pushButton_restart;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_info_room;
    QListWidget *listWidgetInventory;
    QPushButton *pushButton_use;
    QLabel *label_items_rooms;
    QLabel *label_your_damage;
    QLabel *label_win_msg;
    QPushButton *pushButton_tomenu;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButtonNorth = new QPushButton(centralwidget);
        pushButtonNorth->setObjectName(QString::fromUtf8("pushButtonNorth"));
        pushButtonNorth->setGeometry(QRect(180, 360, 80, 24));
        pushButtonSouth = new QPushButton(centralwidget);
        pushButtonSouth->setObjectName(QString::fromUtf8("pushButtonSouth"));
        pushButtonSouth->setGeometry(QRect(180, 460, 80, 24));
        pushButtonWest = new QPushButton(centralwidget);
        pushButtonWest->setObjectName(QString::fromUtf8("pushButtonWest"));
        pushButtonWest->setGeometry(QRect(10, 410, 80, 24));
        pushButtonWest->setMouseTracking(false);
        pushButtonWest->setTabletTracking(false);
        pushButtonWest->setCheckable(false);
        pushButtonWest->setAutoDefault(false);
        pushButtonWest->setFlat(false);
        pushButtonEast = new QPushButton(centralwidget);
        pushButtonEast->setObjectName(QString::fromUtf8("pushButtonEast"));
        pushButtonEast->setGeometry(QRect(340, 410, 80, 24));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(30, 40, 421, 301));
        pushButtonTP = new QPushButton(centralwidget);
        pushButtonTP->setObjectName(QString::fromUtf8("pushButtonTP"));
        pushButtonTP->setGeometry(QRect(130, 410, 80, 24));
        pushButtonMap = new QPushButton(centralwidget);
        pushButtonMap->setObjectName(QString::fromUtf8("pushButtonMap"));
        pushButtonMap->setGeometry(QRect(220, 410, 80, 24));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(540, 30, 161, 161));
        label->setAutoFillBackground(false);
        label->setScaledContents(false);
        pushButtonHystory = new QPushButton(centralwidget);
        pushButtonHystory->setObjectName(QString::fromUtf8("pushButtonHystory"));
        pushButtonHystory->setGeometry(QRect(230, 500, 80, 24));
        pushButtonInfos = new QPushButton(centralwidget);
        pushButtonInfos->setObjectName(QString::fromUtf8("pushButtonInfos"));
        pushButtonInfos->setGeometry(QRect(130, 500, 80, 24));
        label_health = new QLabel(centralwidget);
        label_health->setObjectName(QString::fromUtf8("label_health"));
        label_health->setGeometry(QRect(490, 350, 121, 16));
        label_name = new QLabel(centralwidget);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(490, 320, 111, 21));
        pushButton_attack = new QPushButton(centralwidget);
        pushButton_attack->setObjectName(QString::fromUtf8("pushButton_attack"));
        pushButton_attack->setGeometry(QRect(480, 410, 80, 24));
        textEdit_wordle = new QTextEdit(centralwidget);
        textEdit_wordle->setObjectName(QString::fromUtf8("textEdit_wordle"));
        textEdit_wordle->setGeometry(QRect(540, 230, 101, 31));
        pushButton_validate = new QPushButton(centralwidget);
        pushButton_validate->setObjectName(QString::fromUtf8("pushButton_validate"));
        pushButton_validate->setGeometry(QRect(550, 270, 80, 24));
        label_wordle = new QLabel(centralwidget);
        label_wordle->setObjectName(QString::fromUtf8("label_wordle"));
        label_wordle->setGeometry(QRect(550, 200, 81, 16));
        label_menu = new QLabel(centralwidget);
        label_menu->setObjectName(QString::fromUtf8("label_menu"));
        label_menu->setGeometry(QRect(320, 100, 181, 61));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_menu->sizePolicy().hasHeightForWidth());
        label_menu->setSizePolicy(sizePolicy);
        label_menu->setTextFormat(Qt::AutoText);
        label_menu->setScaledContents(false);
        pushButton_play = new QPushButton(centralwidget);
        pushButton_play->setObjectName(QString::fromUtf8("pushButton_play"));
        pushButton_play->setGeometry(QRect(330, 220, 151, 61));
        label_game_over = new QLabel(centralwidget);
        label_game_over->setObjectName(QString::fromUtf8("label_game_over"));
        label_game_over->setGeometry(QRect(350, 100, 111, 51));
        pushButton_restart = new QPushButton(centralwidget);
        pushButton_restart->setObjectName(QString::fromUtf8("pushButton_restart"));
        pushButton_restart->setGeometry(QRect(330, 220, 151, 61));
        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(170, 10, 131, 31));
        pushButton_info_room = new QPushButton(centralwidget);
        pushButton_info_room->setObjectName(QString::fromUtf8("pushButton_info_room"));
        pushButton_info_room->setGeometry(QRect(480, 450, 80, 24));
        listWidgetInventory = new QListWidget(centralwidget);
        listWidgetInventory->setObjectName(QString::fromUtf8("listWidgetInventory"));
        listWidgetInventory->setGeometry(QRect(590, 420, 181, 51));
        pushButton_use = new QPushButton(centralwidget);
        pushButton_use->setObjectName(QString::fromUtf8("pushButton_use"));
        pushButton_use->setGeometry(QRect(640, 480, 80, 24));
        label_items_rooms = new QLabel(centralwidget);
        label_items_rooms->setObjectName(QString::fromUtf8("label_items_rooms"));
        label_items_rooms->setGeometry(QRect(630, 400, 111, 16));
        label_your_damage = new QLabel(centralwidget);
        label_your_damage->setObjectName(QString::fromUtf8("label_your_damage"));
        label_your_damage->setGeometry(QRect(490, 380, 111, 16));
        label_win_msg = new QLabel(centralwidget);
        label_win_msg->setObjectName(QString::fromUtf8("label_win_msg"));
        label_win_msg->setGeometry(QRect(330, 80, 141, 101));
        pushButton_tomenu = new QPushButton(centralwidget);
        pushButton_tomenu->setObjectName(QString::fromUtf8("pushButton_tomenu"));
        pushButton_tomenu->setGeometry(QRect(330, 220, 151, 61));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        pushButtonWest->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonNorth->setText(QCoreApplication::translate("MainWindow", "North", nullptr));
        pushButtonSouth->setText(QCoreApplication::translate("MainWindow", "South", nullptr));
        pushButtonWest->setText(QCoreApplication::translate("MainWindow", "West", nullptr));
        pushButtonEast->setText(QCoreApplication::translate("MainWindow", "East", nullptr));
        pushButtonTP->setText(QCoreApplication::translate("MainWindow", "TP", nullptr));
        pushButtonMap->setText(QCoreApplication::translate("MainWindow", "MAP", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "[h] --- [f] --- [g]\n"
"             |         \n"
"            |         \n"
"[c] --- [a] --- [b] --- [j]\n"
"            |         \n"
"           |         \n"
"[i] --- [d] --- [e]", nullptr));
        pushButtonHystory->setText(QCoreApplication::translate("MainWindow", "History", nullptr));
        pushButtonInfos->setText(QCoreApplication::translate("MainWindow", "Command", nullptr));
        label_health->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_name->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton_attack->setText(QCoreApplication::translate("MainWindow", "Attack", nullptr));
        pushButton_validate->setText(QCoreApplication::translate("MainWindow", "Validate", nullptr));
        label_wordle->setText(QCoreApplication::translate("MainWindow", "Wordle Game", nullptr));
        label_menu->setText(QCoreApplication::translate("MainWindow", "Welcome to the Zork game \n"
"            Are you ready ?", nullptr));
        pushButton_play->setText(QCoreApplication::translate("MainWindow", "PLAY", nullptr));
        label_game_over->setText(QCoreApplication::translate("MainWindow", "     GAME OVER \n"
"      Try again ...", nullptr));
        pushButton_restart->setText(QCoreApplication::translate("MainWindow", "RESTART", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "Clear the console", nullptr));
        pushButton_info_room->setText(QCoreApplication::translate("MainWindow", "Infos", nullptr));
        pushButton_use->setText(QCoreApplication::translate("MainWindow", "Use", nullptr));
        label_items_rooms->setText(QCoreApplication::translate("MainWindow", "Items in the room", nullptr));
        label_your_damage->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_win_msg->setText(QCoreApplication::translate("MainWindow", "           You win !\n"
"You found your sister !\n"
"   You can play again", nullptr));
        pushButton_tomenu->setText(QCoreApplication::translate("MainWindow", "MENU", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
