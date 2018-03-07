#pragma once
#include <string>


class Zrodlo{

public:
    Zrodlo(char znak);

    char wyswietl() const;

    std::string nazwa() const;

protected:
    std::string m_nazwa;
    char m_znak;
    Zrodlo();
};
