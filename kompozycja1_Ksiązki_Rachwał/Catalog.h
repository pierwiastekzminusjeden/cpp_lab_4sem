#pragma once
#include "Book.h"


class Catalog{

public:
    Catalog(const std::string name);

    ~Catalog();

    void AddBook(Book * toAdd);
// wypisuje książki
    void Print();   

private:
    std::string m_catName;
    Book *m_books[10];
    int m_bookCount;
};
