#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QtSql/QSqlTableModel>
#include "Car.h"
#include "Bike.h"
#include "Logger.h"

class DBManager
{
public:
    virtual void connectToDataBase() = 0;
    virtual QSqlDatabase getDB() = 0;
    virtual bool insertIntoCars(Car& car) = 0;
    virtual bool insertIntoBikes(Bike& bike) = 0;
};

#endif // DBMANAGER_H
