/********************************************************************************
** Form generated from reading UI file 'CreateBike.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEBIKE_H
#define UI_CREATEBIKE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateBike
{
public:
    QWidget *formWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *idLe;
    QLabel *label_3;
    QLineEdit *priceLe;
    QLabel *label_4;
    QLineEdit *yearofManufactureLe;
    QLabel *label_5;
    QLineEdit *modelsLe;
    QLabel *label_6;
    QLineEdit *registrationNumberLe;
    QLabel *label_7;
    QLineEdit *vinLe;
    QLabel *label_8;
    QLineEdit *maximumSpeedLe;
    QLabel *label_9;
    QLineEdit *weightLe;
    QPushButton *confirmBikeButton;

    void setupUi(QDialog *CreateBike)
    {
        if (CreateBike->objectName().isEmpty())
            CreateBike->setObjectName("CreateBike");
        CreateBike->resize(550, 375);
        CreateBike->setStyleSheet(QString::fromUtf8(""));
        formWidget = new QWidget(CreateBike);
        formWidget->setObjectName("formWidget");
        formWidget->setGeometry(QRect(20, 10, 521, 301));
        formLayout = new QFormLayout(formWidget);
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(formWidget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(14);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8(""));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        idLe = new QLineEdit(formWidget);
        idLe->setObjectName("idLe");
        idLe->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, idLe);

        label_3 = new QLabel(formWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8(""));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        priceLe = new QLineEdit(formWidget);
        priceLe->setObjectName("priceLe");
        priceLe->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, priceLe);

        label_4 = new QLabel(formWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8(""));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        yearofManufactureLe = new QLineEdit(formWidget);
        yearofManufactureLe->setObjectName("yearofManufactureLe");
        yearofManufactureLe->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, yearofManufactureLe);

        label_5 = new QLabel(formWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8(""));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        modelsLe = new QLineEdit(formWidget);
        modelsLe->setObjectName("modelsLe");
        modelsLe->setFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, modelsLe);

        label_6 = new QLabel(formWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8(""));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        registrationNumberLe = new QLineEdit(formWidget);
        registrationNumberLe->setObjectName("registrationNumberLe");
        registrationNumberLe->setFont(font);

        formLayout->setWidget(4, QFormLayout::FieldRole, registrationNumberLe);

        label_7 = new QLabel(formWidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8(""));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        vinLe = new QLineEdit(formWidget);
        vinLe->setObjectName("vinLe");
        vinLe->setFont(font);

        formLayout->setWidget(5, QFormLayout::FieldRole, vinLe);

        label_8 = new QLabel(formWidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8(""));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_8);

        maximumSpeedLe = new QLineEdit(formWidget);
        maximumSpeedLe->setObjectName("maximumSpeedLe");
        maximumSpeedLe->setFont(font);

        formLayout->setWidget(6, QFormLayout::FieldRole, maximumSpeedLe);

        label_9 = new QLabel(formWidget);
        label_9->setObjectName("label_9");
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8(""));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_9);

        weightLe = new QLineEdit(formWidget);
        weightLe->setObjectName("weightLe");
        weightLe->setFont(font);

        formLayout->setWidget(7, QFormLayout::FieldRole, weightLe);

        confirmBikeButton = new QPushButton(CreateBike);
        confirmBikeButton->setObjectName("confirmBikeButton");
        confirmBikeButton->setGeometry(QRect(170, 320, 201, 41));
        QFont font1;
        font1.setPointSize(16);
        confirmBikeButton->setFont(font1);
        confirmBikeButton->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(CreateBike);

        QMetaObject::connectSlotsByName(CreateBike);
    } // setupUi

    void retranslateUi(QDialog *CreateBike)
    {
        CreateBike->setWindowTitle(QCoreApplication::translate("CreateBike", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("CreateBike", "ID:", nullptr));
        label_3->setText(QCoreApplication::translate("CreateBike", "\320\246\321\226\320\275\320\260:", nullptr));
        label_4->setText(QCoreApplication::translate("CreateBike", "\320\240\321\226\320\272 \320\262\320\270\320\277\321\203\321\201\320\272\321\203:", nullptr));
        label_5->setText(QCoreApplication::translate("CreateBike", "\320\234\320\276\320\264\320\265\320\273\321\214:", nullptr));
        label_6->setText(QCoreApplication::translate("CreateBike", "\320\240\320\265\321\224\321\201\321\202\321\200\320\260\321\206\321\226\320\271\320\275\320\270\320\271 \320\275\320\276\320\274\320\265\321\200:", nullptr));
        label_7->setText(QCoreApplication::translate("CreateBike", "VIN:", nullptr));
        label_8->setText(QCoreApplication::translate("CreateBike", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\260 \321\210\320\262\320\270\320\264\320\272\321\226\321\201\321\202\321\214:", nullptr));
        label_9->setText(QCoreApplication::translate("CreateBike", "\320\222\320\260\320\263\320\260:", nullptr));
        confirmBikeButton->setText(QCoreApplication::translate("CreateBike", "Create", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateBike: public Ui_CreateBike {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEBIKE_H
