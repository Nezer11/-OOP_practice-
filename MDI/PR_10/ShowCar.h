#ifndef SHOWCAR_H
#define SHOWCAR_H



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
#include <QDialog>
#include "sqlite.h"

namespace Ui {
class ShowCar;
}

class ShowCar : public QDialog
{
    Q_OBJECT

public:
    explicit ShowCar(QWidget *parent = nullptr);
    void setList();
    ~ShowCar();

private:
    Ui::ShowCar *ui;
    DBManager *db;
    QSqlTableModel  *model;
    void setupModel(const QString &tableName, const QStringList &headers);
    void createUI();
};

#endif // SHOWCAR_H
