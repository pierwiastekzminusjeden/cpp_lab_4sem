#pragma once
#include <vector>

class Value;
//klasa reprezentujaca fabryke
class Factory{

public:
//konstruktor, przyjmuje zakres w jakim fabryka ma produkowac obiekty
    Factory(double start, double end);
//dekstruktor, dokonuje dealokacji pamieci zaalokowanej w metodzie Preparevalue()
    ~Factory();
//Metoda zwracajaca wskaznik na obiekt przechowujacy wartosc. Produkuje obiekty Value
//Alokuje pamiec i dodaje wskazniki do tablicy wskaznikow na obiekty przechowujace wartosc
    Value * PrepareValue(const std::string name, double value);
private:
//poczatek zakresu
    double m_start;
//koniec zakresu
    double m_end;
//tablica wskaznikow na obiekty Value
    std::vector <Value*>m_values;
};
