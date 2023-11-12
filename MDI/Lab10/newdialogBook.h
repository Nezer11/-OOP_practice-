#ifndef NEWDIALOGBOOK_H
#define NEWDIALOGBOOK_H

#include <QLabel>
#include <QDialog>
#include <QLineEdit>

class newdialogbook : public QDialog
{
    Q_OBJECT

public:
    newdialogbook(QWidget *parent = nullptr);
    ~newdialogbook();

signals:
    void createBookRequested(int id, QString title, QString author, QString publisher,
                             int year, int pageCount, float price, bool hasHardcover);

private slots:
    void on_buttonBox_accepted();

private:
    QLineEdit *idLineEdit;
    QLineEdit *titleLineEdit;
    QLineEdit *authorLineEdit;
    QLineEdit *publisherLineEdit;
    QLineEdit *yearLineEdit;
    QLineEdit *pageCountLineEdit;
    QLineEdit *priceLineEdit;
    QLineEdit *hardcoverLineEdit;
    QPushButton *createButton;

    QLabel *createLabel(const QString &text);
    void clearFields();
};

#endif // NEWDIALOGBOOK_H
