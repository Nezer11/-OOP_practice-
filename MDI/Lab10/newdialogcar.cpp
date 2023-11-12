#include "car.h"
#include "newdialogcar.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include <QDialog>
#include <QLineEdit>

newdialogcar::newdialogcar(QWidget *parent)
    : QDialog(parent),
      idLineEdit(new QLineEdit(this)),
      modelLineEdit(new QLineEdit(this)),
      yearLineEdit(new QLineEdit(this)),
      priceLineEdit(new QLineEdit(this)),
      registrationNumberLineEdit(new QLineEdit(this)),
      vinNumberLineEdit(new QLineEdit(this)),
      passengerSeatsLineEdit(new QLineEdit(this)),
      numberOfDoorsLineEdit(new QLineEdit(this)),
      createButton(new QPushButton("Create", this))
{

    setWindowTitle("Модальне вікно");
    setModal(true);

    resize(500, 300);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(createLabel("ID:"), 1, Qt::AlignTop);
    layout->addWidget(idLineEdit);
    layout->addWidget(createLabel("Модель:"), 1, Qt::AlignTop);
    layout->addWidget(modelLineEdit);
    layout->addWidget(createLabel("Рік випуску:"), 1, Qt::AlignTop);
    layout->addWidget(yearLineEdit);
    layout->addWidget(createLabel("Ціна:"), 1, Qt::AlignTop);
    layout->addWidget(priceLineEdit);
    layout->addWidget(createLabel("Реєстраційний номер:"), 1, Qt::AlignTop);
    layout->addWidget(registrationNumberLineEdit);
    layout->addWidget(createLabel("VIN-номер:"), 1, Qt::AlignTop);
    layout->addWidget(vinNumberLineEdit);
    layout->addWidget(createLabel("Кількість пасажирських місць:"), 1, Qt::AlignTop);
    layout->addWidget(passengerSeatsLineEdit);
    layout->addWidget(createLabel("Кількість дверей:"), 1, Qt::AlignTop);
    layout->addWidget(numberOfDoorsLineEdit);
    layout->addWidget(createButton);

    connect(createButton, &QPushButton::clicked, this, &newdialogcar::on_buttonBox_accepted);
}

QLabel *newdialogcar::createLabel(const QString &text)
{
    QLabel *label = new QLabel(text, this);
    label->setAlignment(Qt::AlignTop);
    return label;
}

void newdialogcar::clearFields()
{
    idLineEdit->clear();
    modelLineEdit->clear();
    yearLineEdit->clear();
    priceLineEdit->clear();
    registrationNumberLineEdit->clear();
    vinNumberLineEdit->clear();
    passengerSeatsLineEdit->clear();
    numberOfDoorsLineEdit->clear();
}

void newdialogcar::on_buttonBox_accepted()
{
    int id = idLineEdit->text().toInt();
    QString model = modelLineEdit->text();
    int year = yearLineEdit->text().toInt();
    float price = priceLineEdit->text().toFloat();
    QString registrationNumber = registrationNumberLineEdit->text();
    QString vinNumber = vinNumberLineEdit->text();
    int passengerSeats = passengerSeatsLineEdit->text().toInt();
    int numberOfDoors = numberOfDoorsLineEdit->text().toInt();

    emit createCarRequested(id, model, year, price, registrationNumber, vinNumber, passengerSeats, numberOfDoors);
    clearFields();
}

newdialogcar::~newdialogcar()
{
    // Empty destructor
}
