/********************************************************************************
** Form generated from reading UI file 'myclianttest.ui'
**
** Created: Sat Oct 6 18:39:40 2012
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCLIANTTEST_H
#define UI_MYCLIANTTEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myclianttestClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QListView *listView;
    QListView *listView_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *myclianttestClass)
    {
        if (myclianttestClass->objectName().isEmpty())
            myclianttestClass->setObjectName(QString::fromUtf8("myclianttestClass"));
        myclianttestClass->resize(845, 673);
        centralWidget = new QWidget(myclianttestClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(620, 610, 101, 23));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(730, 610, 101, 23));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(330, 580, 91, 23));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(740, 580, 91, 23));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 60, 821, 511));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        listView = new QListView(layoutWidget);
        listView->setObjectName(QString::fromUtf8("listView"));

        horizontalLayout_2->addWidget(listView);

        listView_2 = new QListView(layoutWidget);
        listView_2->setObjectName(QString::fromUtf8("listView_2"));

        horizontalLayout_2->addWidget(listView_2);

        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(310, 30, 31, 23));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(720, 30, 31, 23));
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(330, 610, 281, 20));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(270, 610, 61, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(424, 31, 26, 16));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(11, 31, 26, 16));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(755, 31, 75, 23));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(456, 32, 261, 20));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(343, 31, 75, 23));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(43, 32, 261, 20));
        myclianttestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(myclianttestClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 845, 21));
        myclianttestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(myclianttestClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        myclianttestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(myclianttestClass);
        QObject::connect(pushButton_3, SIGNAL(clicked()), myclianttestClass, SLOT(close()));
        QObject::connect(pushButton, SIGNAL(clicked()), myclianttestClass, SLOT(test()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), myclianttestClass, SLOT(download()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), myclianttestClass, SLOT(getpath()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), myclianttestClass, SLOT(getserverpath()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), myclianttestClass, SLOT(gotomotherpath()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), myclianttestClass, SLOT(gotoservermotherpath()));

        QMetaObject::connectSlotsByName(myclianttestClass);
    } // setupUi

    void retranslateUi(QMainWindow *myclianttestClass)
    {
        myclianttestClass->setWindowTitle(QApplication::translate("myclianttestClass", "myclianttest", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("myclianttestClass", "connect", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("myclianttestClass", "close", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("myclianttestClass", "upload", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("myclianttestClass", "download", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("myclianttestClass", "/..", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("myclianttestClass", "/..", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("myclianttestClass", "Ip Address:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("myclianttestClass", "path:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("myclianttestClass", "path:", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("myclianttestClass", "go", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("myclianttestClass", "go", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myclianttestClass: public Ui_myclianttestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCLIANTTEST_H
