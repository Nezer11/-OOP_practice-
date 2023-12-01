#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql/QSqlTableModel>
#include <QVariantList>

#include <db.h>
#include "Logger.h"

#define DATABASE_HOSTNAME "example"
#define DATABASE_NAME "basa.sqlite"

#define TABLE_CARS "Cars"
#define TABLE_BIKE "Bikes"
#define TABLE_ID "ID"
#define TABLE_MODEL "model"
#define TABLE_YEAR_OF_MANUFACTURE "yearofManufacture"
#define TABLE_VIN "vin"
#define TABLE_PRICE "price"
#define TABLE_REGISTRATION_NUMBER "registrationNumbe"
#define TABLE_MAXIMUM_SPEED "MaximumSpeed"
#define TABLE_WEIGHT "Weight"
#define TABLE_NUMBER_OF_PASSENGER_SEATS "numberofPassengerSeats"
#define TABLE_NUMBER_OF_DOORS "numberofDoors"

class SqliteDBManager : public DBManager {

public:
    static SqliteDBManager* getInstance();
    void connectToDataBase();
    QSqlDatabase getDB();
    bool insertIntoCars(Car& car);
    bool insertIntoBikes(Bike& bike);

private:
    bool openDataBase();
    bool restoreDataBase();
    QSqlDatabase db;
    static SqliteDBManager* instance;
    SqliteDBManager();
    void closeDataBase();
    bool createTables();
};

#endif // DATABASE_H
