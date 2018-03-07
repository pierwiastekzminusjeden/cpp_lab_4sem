#include <iostream>
#include "Monitor.h"

Monitor::Monitor(int szerokosc, int wysokosc) : Wyswietlacz(szerokosc, wysokosc){
    m_nazwa = "monitor";
    m_ramka = '-';
    m_wysokoscRamki = 2;
}
