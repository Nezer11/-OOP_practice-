#include "CreateCar.h"
#include "ui_CreateCar.h"


CreateCar::CreateCar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateCar)
{
    ui->setupUi(this);
}

CreateCar::~CreateCar()
{
    delete ui;
}

void CreateCar::on_confirmCarButton_clicked()
{
    SqliteDBManager* db= SqliteDBManager::getInstance();
    id = ui->idLe->text();
    models = ui->modelsLe->text();
    yearofManufacture = ui->yearofManufactureLe->text();
    price = ui->priceLe->text();
    registrationNumber = ui->registrationNumberLe->text();
    vin = ui->vinLe->text();
    numberofPassengerSeats = ui->numberofPassengerSeatsLe->text();
    numberofDoors = ui->numberofDoorsLe->text();
    try{
        if(ui->idLe->text().isEmpty() || ui->modelsLe->text().isEmpty() || ui->yearofManufactureLe->text().isEmpty() || ui->priceLe->text().isEmpty() || ui->registrationNumberLe->text().isEmpty() || ui->vinLe->text().isEmpty() || ui->numberofPassengerSeatsLe->text().isEmpty() ||  ui->numberofDoorsLe->text().isEmpty()){
            QMessageBox::warning(this, "Error", "Empty fields");
            throw std::runtime_error("Some fields are empty");
        }
        else {
            Car car;
            car.setId(id.toInt());
            car.setModel( models.toStdString());
            car.setYearofManufacture(yearofManufacture.toStdString());
            car.setPrice(price.toStdString());
            car.setRegistrationNumber(registrationNumber.toStdString());
            car.setVIN(vin.toStdString());
            car.setNumberofPassengerSeats(numberofPassengerSeats.toStdString());
            car.setNumberofDoors(numberofDoors.toStdString());
            if (db->insertIntoCars(car)) {
                QMessageBox::information(this, "Success", "Created object");

            } else {
                QMessageBox::warning(this, "Error", "Error with the database!");
            }
        }
    }catch(const std::runtime_error &e){
        qWarning()<<"Exception in creating: "<<e.what();
    }
}
