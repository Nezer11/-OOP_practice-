/********************************************************************************
** Form generated from reading UI file 'ShowBike.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWBIKE_H
#define UI_SHOWBIKE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ShowBike
{
public:
    QTableView *bikeTableView;

    void setupUi(QDialog *ShowBike)
    {
        if (ShowBike->objectName().isEmpty())
            ShowBike->setObjectName("ShowBike");
        ShowBike->resize(659, 422);
        ShowBike->setStyleSheet(QString::fromUtf8(""));
        bikeTableView = new QTableView(ShowBike);
        bikeTableView->setObjectName("bikeTableView");
        bikeTableView->setGeometry(QRect(20, 20, 631, 381));

        retranslateUi(ShowBike);

        QMetaObject::connectSlotsByName(ShowBike);
    } // setupUi

    void retranslateUi(QDialog *ShowBike)
    {
        ShowBike->setWindowTitle(QCoreApplication::translate("ShowBike", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowBike: public Ui_ShowBike {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWBIKE_H
