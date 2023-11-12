// Book.h
#ifndef BOOK_H
#define BOOK_H

#include <QString>

class Book
{
public:
    Book(int id, const QString& title, const QString& author, const QString& publisher,
         int year, int pageCount, float price, bool hasHardcover);

    int getId() const;
    QString getTitle() const;
    QString getAuthor() const;
    QString getPublisher() const;
    int getYear() const;
    int getPageCount() const;
    float getPrice() const;
    bool hasHardcover() const;

    virtual QString toString() const = 0;
    virtual ~Book() = default;

private:
    int id;
    QString title;
    QString author;
    QString publisher;
    int year;
    int pageCount;
    float price;
    bool hardcover;
};

class ConcreteBook : public Book
{
public:
    ConcreteBook(int id, const QString& title, const QString& author, const QString& publisher,
                 int year, int pageCount, float price, bool hasHardcover);
    ~ConcreteBook() override;

    QString toString() const override;
};

#endif // BOOK_H
