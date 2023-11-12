#ifndef LISTSBOOK_H
#define LISTSBOOK_H


#include <QString>

class ListBook
{
public:
    ListBook(int id, const QString& title, const QString& author, const QString& publisher,
             int year, int pageCount, float price, bool hasHardcover);

    QString toString() const;

    int getId() const { return id; }
    QString getTitle() const { return title; }
    QString getAuthor() const { return author; }
    QString getPublisher() const { return publisher; }
    int getYear() const { return year; }
    int getPageCount() const { return pageCount; }
    float getPrice() const { return price; }
    bool getHasHardcover() const { return hasHardcover; }

private:
    int id;
    QString title;
    QString author;
    QString publisher;
    int year;
    int pageCount;
    float price;
    bool hasHardcover;
};

#endif // LISTSBOOK_H
