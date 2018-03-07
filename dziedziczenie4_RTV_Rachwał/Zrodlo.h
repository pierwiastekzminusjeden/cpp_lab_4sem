#pragma once
#include <string>


class Zrodlo{

public:
    Zrodlo(char znak);

    virtual char wyswietl() const;

    virtual std::string nazwa() const;

protected:
    std::string m_nazwa;
    char m_znak;
    Zrodlo();
};
