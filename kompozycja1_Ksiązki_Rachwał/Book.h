#pragma once
#include "Page.h"

class Book{

public:
    Book();

    Book(const std::string name);

    ~Book();

    void AddPage(Page *& page);

    void Print();

    void Copy(const Book * toCopy);

    void AddTitle(const std::string title);

    void AddHeader(const std::string newHeader);

    void AddText(const std::string newText);


private:
 
};
