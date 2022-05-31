/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNowa_Gra;
    QWidget *centralwidget;
    QLabel *lblQuestion;
    QPushButton *btnAnswer1;
    QPushButton *btnAnswer2;
    QPushButton *btnAnswer3;
    QPushButton *btnAnswer4;
    QPushButton *btnQLoad;
    QLabel *lblResult;
    QPushButton *btnCheck;
    QLabel *lblCheckedAnswer;
    QLabel *lblLogo;
    QMenuBar *menubar;
    QMenu *menuPostaw_na_szyszke;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1336, 775);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 163, 21);"));
        MainWindow->setTabShape(QTabWidget::Rounded);
        MainWindow->setDockNestingEnabled(false);
        actionNowa_Gra = new QAction(MainWindow);
        actionNowa_Gra->setObjectName(QString::fromUtf8("actionNowa_Gra"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lblQuestion = new QLabel(centralwidget);
        lblQuestion->setObjectName(QString::fromUtf8("lblQuestion"));
        lblQuestion->setGeometry(QRect(30, 10, 971, 81));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblQuestion->sizePolicy().hasHeightForWidth());
        lblQuestion->setSizePolicy(sizePolicy);
        lblQuestion->setSizeIncrement(QSize(0, 0));
        QFont font;
        font.setPointSize(20);
        lblQuestion->setFont(font);
        lblQuestion->setStyleSheet(QString::fromUtf8("background-color: rgb(176, 213, 28);\n"
""));
        lblQuestion->setFrameShape(QFrame::NoFrame);
        lblQuestion->setAlignment(Qt::AlignCenter);
        btnAnswer1 = new QPushButton(centralwidget);
        btnAnswer1->setObjectName(QString::fromUtf8("btnAnswer1"));
        btnAnswer1->setGeometry(QRect(30, 180, 481, 261));
        btnAnswer1->setFont(font);
        btnAnswer1->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 236, 219);\n"
"background-color:rgb(243, 243, 243)"));
        btnAnswer1->setFlat(false);
        btnAnswer2 = new QPushButton(centralwidget);
        btnAnswer2->setObjectName(QString::fromUtf8("btnAnswer2"));
        btnAnswer2->setGeometry(QRect(520, 180, 481, 261));
        btnAnswer2->setFont(font);
        btnAnswer2->setStyleSheet(QString::fromUtf8("background-color:rgb(243, 243, 243)"));
        btnAnswer3 = new QPushButton(centralwidget);
        btnAnswer3->setObjectName(QString::fromUtf8("btnAnswer3"));
        btnAnswer3->setGeometry(QRect(30, 450, 481, 261));
        btnAnswer3->setFont(font);
        btnAnswer3->setStyleSheet(QString::fromUtf8("background-color:rgb(243, 243, 243)"));
        btnAnswer4 = new QPushButton(centralwidget);
        btnAnswer4->setObjectName(QString::fromUtf8("btnAnswer4"));
        btnAnswer4->setGeometry(QRect(520, 450, 481, 261));
        btnAnswer4->setFont(font);
        btnAnswer4->setStyleSheet(QString::fromUtf8("background-color:rgb(243, 243, 243)"));
        btnQLoad = new QPushButton(centralwidget);
        btnQLoad->setObjectName(QString::fromUtf8("btnQLoad"));
        btnQLoad->setGeometry(QRect(1010, 560, 271, 151));
        btnQLoad->setFont(font);
        btnQLoad->setStyleSheet(QString::fromUtf8("background-color:rgb(243, 243, 243)"));
        lblResult = new QLabel(centralwidget);
        lblResult->setObjectName(QString::fromUtf8("lblResult"));
        lblResult->setGeometry(QRect(1010, 10, 271, 81));
        lblResult->setFont(font);
        lblResult->setStyleSheet(QString::fromUtf8("background-color: rgb(176, 213, 28);"));
        lblResult->setFrameShape(QFrame::NoFrame);
        lblResult->setAlignment(Qt::AlignCenter);
        btnCheck = new QPushButton(centralwidget);
        btnCheck->setObjectName(QString::fromUtf8("btnCheck"));
        btnCheck->setGeometry(QRect(1010, 450, 271, 101));
        btnCheck->setFont(font);
        btnCheck->setStyleSheet(QString::fromUtf8("background-color:rgb(243, 243, 243)"));
        lblCheckedAnswer = new QLabel(centralwidget);
        lblCheckedAnswer->setObjectName(QString::fromUtf8("lblCheckedAnswer"));
        lblCheckedAnswer->setGeometry(QRect(30, 100, 971, 71));
        lblCheckedAnswer->setFont(font);
        lblCheckedAnswer->setStyleSheet(QString::fromUtf8("background-color: rgb(176, 213, 28);"));
        lblCheckedAnswer->setFrameShape(QFrame::NoFrame);
        lblCheckedAnswer->setAlignment(Qt::AlignCenter);
        lblLogo = new QLabel(centralwidget);
        lblLogo->setObjectName(QString::fromUtf8("lblLogo"));
        lblLogo->setGeometry(QRect(1010, 100, 271, 331));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1336, 22));
        menuPostaw_na_szyszke = new QMenu(menubar);
        menuPostaw_na_szyszke->setObjectName(QString::fromUtf8("menuPostaw_na_szyszke"));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuPostaw_na_szyszke->menuAction());
        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Postaw na szyszke!", nullptr));
        actionNowa_Gra->setText(QCoreApplication::translate("MainWindow", "Nowa Gra", nullptr));
        lblQuestion->setText(QCoreApplication::translate("MainWindow", "Pytanie", nullptr));
        btnAnswer1->setText(QString());
        btnAnswer2->setText(QString());
        btnAnswer3->setText(QString());
        btnAnswer4->setText(QString());
        btnQLoad->setText(QCoreApplication::translate("MainWindow", "Nowa gra", nullptr));
        lblResult->setText(QCoreApplication::translate("MainWindow", "Wynik", nullptr));
        btnCheck->setText(QCoreApplication::translate("MainWindow", "Sprawd\305\272 odpowied\305\272", nullptr));
        lblCheckedAnswer->setText(QCoreApplication::translate("MainWindow", "Odpowied\305\272", nullptr));
        lblLogo->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        menuPostaw_na_szyszke->setTitle(QString());
        menu->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
