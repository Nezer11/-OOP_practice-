#include "CreateBike.h"
#include "ui_CreateBike.h"

CreateBike::CreateBike(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateBike)
{
    ui->setupUi(this);
}

CreateBike::~CreateBike()
{
    delete ui;
}

void CreateBike::on_confirmBikeButton_clicked()
{
    SqliteDBManager* db= SqliteDBManager::getInstance();
    id = ui->idLe->text();
    models  = ui->modelsLe->text();
    yearofManufacture = ui->yearofManufactureLe->text();
    price = ui->priceLe->text();
    registrationNumber = ui->registrationNumberLe->text();
    vin = ui->vinLe->text();
    maximumSpeed = ui->maximumSpeedLe->text();
    weight = ui->weightLe->text();
    try{
    if(ui->idLe->text().isEmpty() || ui->modelsLe->text().isEmpty() || ui->yearofManufactureLe->text().isEmpty() || ui->priceLe->text().isEmpty() || ui->registrationNumberLe->text().isEmpty() || ui->vinLe->text().isEmpty() || ui->maximumSpeedLe->text().isEmpty() || ui->weightLe->text().isEmpty()){
        QMessageBox::warning(this, "Error", "Empty fields");
        throw std::runtime_error("Some fields are empty");
    }
    else {
        Bike bike;
        bike.setId(id.toInt());
        bike.setModel(models.toStdString());
        bike.setYearofManufacture(yearofManufacture.toStdString());
        bike.setPrice(price.toStdString());
        bike.setRegistrationNumber(registrationNumber.toStdString());
        bike.setVIN(vin.toStdString());
        bike.setMaximumSpeed(maximumSpeed.toStdString());
        bike.setWeight(weight.toStdString());
        if (db->insertIntoBikes(bike)) {
            QMessageBox::information(this, "Success", "Created object");

        } else {
            QMessageBox::warning(this, "Error", "Error with the database!");
        }
    }
    }catch(const std::runtime_error &e){
    qWarning()<<"Exception in creating: "<<e.what();
    }
}
