/********************************************************************************
** Form generated from reading UI file 'ShowCar.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWCAR_H
#define UI_SHOWCAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ShowCar
{
public:
    QTableView *carTableView;

    void setupUi(QDialog *ShowCar)
    {
        if (ShowCar->objectName().isEmpty())
            ShowCar->setObjectName("ShowCar");
        ShowCar->resize(543, 368);
        ShowCar->setStyleSheet(QString::fromUtf8(""));
        carTableView = new QTableView(ShowCar);
        carTableView->setObjectName("carTableView");
        carTableView->setGeometry(QRect(20, 10, 511, 351));

        retranslateUi(ShowCar);

        QMetaObject::connectSlotsByName(ShowCar);
    } // setupUi

    void retranslateUi(QDialog *ShowCar)
    {
        ShowCar->setWindowTitle(QCoreApplication::translate("ShowCar", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowCar: public Ui_ShowCar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWCAR_H
