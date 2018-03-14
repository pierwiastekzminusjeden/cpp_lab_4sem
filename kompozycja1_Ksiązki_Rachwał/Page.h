#pragma once
#include <string>
class Page{

public:
    Page();

    ~Page();

    void AddHeader(const std::string header);

    Page* Copy() const;

    void AddText(const std::string text);

    void Print() const;

private:
 
};
