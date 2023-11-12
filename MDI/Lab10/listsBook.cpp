// listbook.cpp
#include "listsBook.h"

ListBook::ListBook(int id, const QString& title, const QString& author, const QString& publisher,
                   int year, int pageCount, float price, bool hasHardcover)
    : id(id),
    title(title),
    author(author),
    publisher(publisher),
    year(year),
    pageCount(pageCount),
    price(price),
    hasHardcover(hasHardcover)
{}

QString ListBook::toString() const
{
    // Форматування рядка для виведення
    return QString("ID: %1\nTitle: %2\nAuthor: %3\nPublisher: %4\nYear: %5\nPage Count: %6\nPrice: %7\nHas Hardcover: %8")
        .arg(id)
        .arg(title)
        .arg(author)
        .arg(publisher)
        .arg(year)
        .arg(pageCount)
        .arg(price)
        .arg(hasHardcover ? "Yes" : "No");
}
