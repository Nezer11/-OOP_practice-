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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *exitButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *createTeacherButton;
    QPushButton *createStudentButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *showTeacherButton;
    QPushButton *showStudentButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(562, 272);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 0, 71, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Eras Demi ITC")});
        font.setPointSize(16);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(230, 180, 91, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(14);
        exitButton->setFont(font1);
        exitButton->setStyleSheet(QString::fromUtf8(""));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 60, 251, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        createTeacherButton = new QPushButton(verticalLayoutWidget);
        createTeacherButton->setObjectName("createTeacherButton");
        createTeacherButton->setFont(font1);
        createTeacherButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(createTeacherButton);

        createStudentButton = new QPushButton(verticalLayoutWidget);
        createStudentButton->setObjectName("createStudentButton");
        createStudentButton->setFont(font1);
        createStudentButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(createStudentButton);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(300, 60, 251, 111));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        showTeacherButton = new QPushButton(verticalLayoutWidget_2);
        showTeacherButton->setObjectName("showTeacherButton");
        showTeacherButton->setFont(font1);
        showTeacherButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(showTeacherButton);

        showStudentButton = new QPushButton(verticalLayoutWidget_2);
        showStudentButton->setObjectName("showStudentButton");
        showStudentButton->setFont(font1);
        showStudentButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(showStudentButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 562, 21));
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
        label->setText(QCoreApplication::translate("MainWindow", "PR_10", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
        verticalLayoutWidget->setStyleSheet(QString());
        createTeacherButton->setText(QCoreApplication::translate("MainWindow", "Create Teacher", nullptr));
        createStudentButton->setText(QCoreApplication::translate("MainWindow", "Create student", nullptr));
        showTeacherButton->setText(QCoreApplication::translate("MainWindow", "Show Teacher", nullptr));
        showStudentButton->setText(QCoreApplication::translate("MainWindow", "Show student", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
