#pragma once
#include "Page.h"

class Book{

public:
    Book(const std::string name = "page");

    ~Book();

    void AddPage(Page * page);

    void Print();

    void Copy(const Book * toCopy);

    void AddTitle(const std::string title);

    void AddHeader(const std::string newHeader);

    void AddText(const std::string newText);

    int getNumberOfPages() const;

    std::string getAuthor() const;

private:
    std::string m_title;
    std::string m_author;
    Page *m_pages[10];
    int m_pageCount;
    int m_iter;
};
