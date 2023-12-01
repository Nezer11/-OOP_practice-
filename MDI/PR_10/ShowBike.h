#ifndef SHOWBIKE_H
#define SHOWBIKE_H

#include <QDialog>
#include <QListWidget>
#include <QDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include <QCheckBox>
#include <QLineEdit>
#include <QWidget>
#include "sqlite.h"

namespace Ui {
class ShowBike;
}

class ShowBike : public QDialog
{
    Q_OBJECT

public:
    explicit ShowBike(QWidget *parent = nullptr);
    void setList();
    ~ShowBike();

private:
    Ui::ShowBike *ui;
    DBManager *db;
    QSqlTableModel  *model;
    void setupModel(const QString &tableName, const QStringList &headers);
    void createUI();
};

#endif // SHOWBIKE_H
