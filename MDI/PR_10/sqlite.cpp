#include "sqlite.h"
#include "Logger.h"
#include <QObject>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QFile>
#include <QDate>
#include <QDebug>

SqliteDBManager* SqliteDBManager::instance = nullptr;

SqliteDBManager::SqliteDBManager(){

}

SqliteDBManager* SqliteDBManager::getInstance()
{
    if(instance == nullptr){
        instance = new SqliteDBManager();
    }
    return instance;
}

void SqliteDBManager::connectToDataBase()
{
        if (QFile(DATABASE_NAME).exists()) {
            if (!this->openDataBase()) {
            }
        } else {
            if (!this->restoreDataBase()) {
            }
        }
}

QSqlDatabase SqliteDBManager::getDB()
{
    return db;
}

bool SqliteDBManager::restoreDataBase()
{
        if (this->openDataBase()) {
            if (!this->createTables()) {
                return false;
            } else {
                return true;
            }
        }
}

bool SqliteDBManager::openDataBase()
{
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setHostName(DATABASE_HOSTNAME);
        db.setDatabaseName(DATABASE_NAME);

        if (db.open()) {
            return true;
        }
}

void SqliteDBManager::closeDataBase()
{
    db.close();
}

bool SqliteDBManager::createTables()
{
    QSqlQuery query;
    bool b = true;
    if(!query.exec( "CREATE TABLE " TABLE_CARS"("
                    TABLE_ID " INT NOT NULL, "
                    TABLE_MODEL " TEXT NOT NULL,"
                    TABLE_YEAR_OF_MANUFACTURE " TEXT NOT NULL,"
                    TABLE_VIN " TEXT NOT NULL,"
                    TABLE_PRICE " TEXT NOT NULL,"
                    TABLE_REGISTRATION_NUMBER" TEXT NOT NULL,"
                    TABLE_NUMBER_OF_PASSENGER_SEATS " TEXT NOT NULL,"
                    TABLE_NUMBER_OF_DOORS  " TEXT NOT NULL"
                    " )"
                    )){
        b = false;
    }
    if(!query.exec( "CREATE TABLE " TABLE_BIKE"("
                    TABLE_ID " INT NOT NULL, "
                    TABLE_MODEL " TEXT NOT NULL,"
                    TABLE_YEAR_OF_MANUFACTURE " TEXT NOT NULL,"
                    TABLE_VIN " TEXT NOT NULL,"
                    TABLE_PRICE" TEXT NOT NULL,"
                    TABLE_REGISTRATION_NUMBER " TEXT NOT NULL,"
                    TABLE_MAXIMUM_SPEED" TEXT NOT NULL,"
                    TABLE_WEIGHT " TEXT NOT NULL"
                    " )"
                    )){
        b = false;
    }
        return b;
}

bool SqliteDBManager::insertIntoCars(Car& car)
{
        try {
        QSqlQuery query;
        query.prepare("INSERT INTO " TABLE_CARS " ("
                      TABLE_ID ", "
                      TABLE_MODEL ", "
                      TABLE_YEAR_OF_MANUFACTURE ", "
                      TABLE_VIN ", "
                      TABLE_PRICE ", "
                      TABLE_REGISTRATION_NUMBER ", "
                      TABLE_NUMBER_OF_PASSENGER_SEATS ", "
                      TABLE_NUMBER_OF_DOORS ") "
                      "VALUES(:ID, :model, :yearofManufacture, :price, :vin, :registrationNumber, :numberofPassengerSeats, :numberofDoors)");
        query.bindValue(":ID", car.getId());
        query.bindValue(":model", QString::fromStdString(car.getModel()));
        query.bindValue(":yearofManufacture", QString::fromStdString(car.getYearofManufacture()));
        query.bindValue(":price", QString::fromStdString(car.getPrice()));
        query.bindValue(":vin", QString::fromStdString(car.getVIN()));
        query.bindValue(":registrationNumber", QString::fromStdString(car.getRegistrationNumber()));
        query.bindValue(":numberofPassengerSeats", QString::fromStdString(car.getNumberofPassengerSeats()));
        query.bindValue(":numberofDoors", QString::fromStdString(car.getNumberofDoors()));

        if (!query.exec()) {
                qDebug() << "Error in insert to Car table: " << query.lastError();
                throw std::runtime_error("Error in insert to Car table");
        } else {
                return true;
        }
        } catch(const std::exception &e) {
        qWarning() << "Exception in inserting: " << e.what();
        return false;
        }
}

bool SqliteDBManager::insertIntoBikes(Bike& bike)
{
        try {
        QSqlQuery query;
        query.prepare("INSERT INTO " TABLE_BIKE " ("
                      TABLE_ID ", "
                      TABLE_MODEL ", "
                      TABLE_YEAR_OF_MANUFACTURE ", "
                      TABLE_VIN ", "
                      TABLE_PRICE ", "
                      TABLE_REGISTRATION_NUMBER", "
                      TABLE_MAXIMUM_SPEED ", "
                      TABLE_WEIGHT ") "
                      "VALUES(:ID, :model, :yearofManufacture, :vin, :price, :registrationNumber, :maximumSpeed, :weight)");
        query.bindValue(":ID", bike.getId());
        query.bindValue(":model", QString::fromStdString(bike.getModel()));
        query.bindValue(":yearofManufacture", QString::fromStdString(bike.getYearofManufacture()));
        query.bindValue(":vin", QString::fromStdString(bike.getVIN()));
        query.bindValue(":price", QString::fromStdString(bike.getPrice()));
         query.bindValue(":registrationNumber", QString::fromStdString(bike.getRegistrationNumber()));
        query.bindValue(":maximumSpeed", QString::fromStdString(bike.getMaximumSpeed()));
        query.bindValue(":weight", QString::fromStdString(bike.getWeight()));

        if (!query.exec()) {
                qDebug() << "Error in insert to Motorbike table: " << query.lastError();
                throw std::runtime_error("Error in insert to Motorbike table");
        } else {
                return true;
        }
        } catch(const std::exception &e) {
        qWarning() << "Exception in inserting: " << e.what();
        return false;
        }
}


