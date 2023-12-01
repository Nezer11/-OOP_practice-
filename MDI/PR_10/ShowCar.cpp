#include "ShowCar.h"
#include "ui_ShowCar.h"
#include <QLayout>
#include <QListWidget>
#include <QListWidgetItem>

ShowCar::ShowCar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowCar)
{
    ui->setupUi(this);
}

ShowCar::~ShowCar()
{
    delete ui;
}

void ShowCar::setupModel(const QString &tableName, const QStringList &headers)
{
    SqliteDBManager* db= SqliteDBManager::getInstance();
    model = new QSqlTableModel(this, db->getDB());
    model->setTable(tableName);
    for(int i = 0, j = 0; i < model->columnCount(); i++, j++){
        model->setHeaderData(i, Qt::Horizontal, headers[j]);
    }
    model->setSort(0,Qt::AscendingOrder);
}


void ShowCar::createUI()
{
    ui->carTableView->setModel(model);
    ui->carTableView->setColumnHidden(0, true);
    ui->carTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->carTableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->carTableView->resizeColumnsToContents();
    ui->carTableView->setEditTriggers(QAbstractItemView::DoubleClicked);
    ui->carTableView->horizontalHeader()->setStretchLastSection(true);

    model->select();
}

void ShowCar::setList(){
    this->setupModel(TABLE_CARS,
                     QStringList() << tr("  ID  ")
                                   << tr("Models")
                                   << tr("Year of Manufacture")
                                   << tr("Price")
                                   << tr("Registration Number")
                                   << tr("VIN")
                                   << tr("Number of Passenger Seats")
                                   << tr("Number of Doors")
                     );

    this->createUI();
}
