#pragma once
#include <string>

class Page{
friend class Book;
public:
    Page();

    ~Page();

    void AddHeader(const std::string header);

    Page* Copy() const;

    void AddText(const std::string text);

    void Print() const;

private:
    std::string m_header;
    std::string m_textBuff;
};
