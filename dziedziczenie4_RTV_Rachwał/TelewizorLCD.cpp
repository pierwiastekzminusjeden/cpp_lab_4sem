#include <iostream>
#include "TelewizorLCD.h"


TelewizorLCD::TelewizorLCD(int szerokosc, int wysokosc): Wyswietlacz(szerokosc, wysokosc){
    m_nazwa = "telewizor";
    m_ramka = '_';
    m_wysokoscRamki = 2;
}
