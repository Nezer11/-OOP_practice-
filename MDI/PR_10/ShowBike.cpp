#include "ShowBike.h"
#include "ui_ShowBike.h"
#include <QLayout>
#include <QListWidget>
#include <QListWidgetItem>
ShowBike::ShowBike(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowBike)
{
    ui->setupUi(this);
}

ShowBike::~ShowBike()
{
    delete ui;
}

void ShowBike::setupModel(const QString &tableName, const QStringList &headers)
{
    SqliteDBManager* db= SqliteDBManager::getInstance();
    model = new QSqlTableModel(this, db->getDB());
    model->setTable(tableName);
    for(int i = 0, j = 0; i < model->columnCount(); i++, j++){
        model->setHeaderData(i, Qt::Horizontal, headers[j]);
    }
    model->setSort(0,Qt::AscendingOrder);
}


void ShowBike::createUI()
{
    ui->bikeTableView->setModel(model);
    ui->bikeTableView->setColumnHidden(0, true);
    ui->bikeTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->bikeTableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->bikeTableView->resizeColumnsToContents();
    ui->bikeTableView->setEditTriggers(QAbstractItemView::DoubleClicked);
    ui->bikeTableView->horizontalHeader()->setStretchLastSection(true);

    model->select();
}

void ShowBike::setList(){
    this->setupModel(TABLE_BIKE,
                     QStringList() << tr("ID")
                                   << tr("Model")
                                   << tr("Year of Manufacture")
                                   << tr("VIN")
                                   << tr("Price")
                                   << tr("Registration Number")
                                   << tr("Maximum Speed")
                                   << tr("Weight")
                     );

    this->createUI();
}
