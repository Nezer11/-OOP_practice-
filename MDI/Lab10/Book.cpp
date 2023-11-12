// Book.cpp
#include "Book.h"

Book::Book(int id, const QString& title, const QString& author, const QString& publisher,
           int year, int pageCount, float price, bool hasHardcover)
    : id(id), title(title), author(author), publisher(publisher), year(year),
      pageCount(pageCount), price(price), hardcover(hasHardcover)
{}

int Book::getId() const
{
    return id;
}

QString Book::getTitle() const
{
    return title;
}

QString Book::getAuthor() const
{
    return author;
}

QString Book::getPublisher() const
{
    return publisher;
}

int Book::getYear() const
{
    return year;
}

int Book::getPageCount() const
{
    return pageCount;
}

float Book::getPrice() const
{
    return price;
}

bool Book::hasHardcover() const
{
    return hardcover;
}

ConcreteBook::ConcreteBook(int id, const QString& title, const QString& author, const QString& publisher,
                           int year, int pageCount, float price, bool hasHardcover)
    : Book(id, title, author, publisher, year, pageCount, price, hasHardcover)
{
    // Initialize specific fields for ConcreteBook
}

ConcreteBook::~ConcreteBook()
{
    // Implement if needed
}

QString ConcreteBook::toString() const
{
    return "ConcreteBook: " + QString::number(getId()) + "\nНазва: " + getTitle() +
           "\nАвтор: " + getAuthor() + "\nВидавництво: " + getPublisher() +
           "\nРік видання: " + QString::number(getYear()) +
           "\nКількість сторінок: " + QString::number(getPageCount()) +
           "\nЦіна: " + QString::number(getPrice()) +
           "\nТверда обкладинка: " + (hasHardcover() ? "Так" : "Ні");
}

