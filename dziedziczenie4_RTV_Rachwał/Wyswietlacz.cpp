#include <iostream>
#include "Wyswietlacz.h"
#include "Zrodlo.h"

Wyswietlacz::Wyswietlacz(int szerokosc, int wysokosc){
    m_szerokosc = szerokosc;
    m_wysokosc = wysokosc;
    m_wysokoscRamki = 0;
    m_ramka = '*';
    m_nazwa = "nie zidentyfikowano";
}

void Wyswietlacz::Wyswietl(Zrodlo &urzadzenie) const{
    std::cout << "Polaczono " << m_nazwa << " i " << urzadzenie.nazwa() << std::endl;
    budujRamke();
    for (int i = 0; i < m_wysokosc; i++){
        for (int j = 0; j < m_szerokosc; j++)
            std::cout << urzadzenie.wyswietl();
        std::cout << std::endl;
    }
    budujRamke();
}

void Wyswietlacz::budujRamke() const{
    for (int i = 0; i < m_wysokoscRamki; i++){
        for (int j = 0; j < m_szerokosc; j++)
            std::cout << m_ramka;
        std::cout << std::endl;
    }
}
