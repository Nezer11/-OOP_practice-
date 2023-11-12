// newdialogbook.cpp
#include "book.h"
#include "newdialogbook.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include <QDialog>
#include <QLineEdit>

newdialogbook::newdialogbook(QWidget *parent)
    : QDialog(parent),
      idLineEdit(new QLineEdit(this)),
      titleLineEdit(new QLineEdit(this)),
      authorLineEdit(new QLineEdit(this)),
      publisherLineEdit(new QLineEdit(this)),
      yearLineEdit(new QLineEdit(this)),
      pageCountLineEdit(new QLineEdit(this)),
      priceLineEdit(new QLineEdit(this)),
      hardcoverLineEdit(new QLineEdit(this)),
      createButton(new QPushButton("Create", this))
{
    setWindowTitle("Модальне вікно");
    setModal(true);

    resize(500, 300);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(createLabel("ID:"), 1, Qt::AlignTop);
    layout->addWidget(idLineEdit);
    layout->addWidget(createLabel("Назва:"), 1, Qt::AlignTop);
    layout->addWidget(titleLineEdit);
    layout->addWidget(createLabel("Автор:"), 1, Qt::AlignTop);
    layout->addWidget(authorLineEdit);
    layout->addWidget(createLabel("Видавництво:"), 1, Qt::AlignTop);
    layout->addWidget(publisherLineEdit);
    layout->addWidget(createLabel("Рік видання:"), 1, Qt::AlignTop);
    layout->addWidget(yearLineEdit);
    layout->addWidget(createLabel("Кількість сторінок:"), 1, Qt::AlignTop);
    layout->addWidget(pageCountLineEdit);
    layout->addWidget(createLabel("Ціна:"), 1, Qt::AlignTop);
    layout->addWidget(priceLineEdit);
    layout->addWidget(createLabel("Тверда обкладинка:"), 1, Qt::AlignTop);
    layout->addWidget(hardcoverLineEdit);
    layout->addWidget(createButton);

    connect(createButton, &QPushButton::clicked, this, &newdialogbook::on_buttonBox_accepted);
}

QLabel *newdialogbook::createLabel(const QString &text)
{
    QLabel *label = new QLabel(text, this);
    label->setAlignment(Qt::AlignTop);
    return label;
}

void newdialogbook::clearFields()
{
    idLineEdit->clear();
    titleLineEdit->clear();
    authorLineEdit->clear();
    publisherLineEdit->clear();
    yearLineEdit->clear();
    pageCountLineEdit->clear();
    priceLineEdit->clear();
    hardcoverLineEdit->clear();
}

void newdialogbook::on_buttonBox_accepted()
{
    int id = idLineEdit->text().toInt();
    QString title = titleLineEdit->text();
    QString author = authorLineEdit->text();
    QString publisher = publisherLineEdit->text();
    int year = yearLineEdit->text().toInt();
    int pageCount = pageCountLineEdit->text().toInt();
    float price = priceLineEdit->text().toFloat();
    bool hasHardcover = hardcoverLineEdit->text().toInt(); // Assuming you're using 0 or 1 for boolean

    emit createBookRequested(id, title, author, publisher, year, pageCount, price, hasHardcover);
    clearFields();
}

newdialogbook::~newdialogbook()
{
    // Empty destructor
}
