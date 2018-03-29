#pragma once
#include "Property.h"

//Kontener obiektow typu property
class ProArray{
public:
//konstruktor, alokuje poamiec na tablice wskaznikow do obiektow property. wypelnia obiektami pustymi
    ProArray(int size);
//destruktor, dealkouje pamiec zaalokowana w konstruktorze
    ~ProArray();
//ustwawia obiekt na zadana pozycje kopiujac go.
    void set(int pos,const Property & data);
//wypisuje cala liste
    void printAll() const;
private:
//tablica wskaznikow na obiekty typu property
    Property **m_arr;
//rozmiar powyzszej tablicy
    int m_size;
};
