#pragma once
#include <string>


class Zrodlo;

class Wyswietlacz
{

  public:
    Wyswietlacz(int szerokosc, int wysokosc);

    void Wyswietl(Zrodlo &urzadzenie) const;

  protected:
    void budujRamke() const;
    int m_szerokosc;
    int m_wysokosc;
    int m_wysokoscRamki;
    char m_ramka;
    std::string m_nazwa;
    Wyswietlacz();
};
