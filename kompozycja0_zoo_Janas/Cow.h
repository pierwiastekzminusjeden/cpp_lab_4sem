#pragma once
#include "Animal.h"

//Klasa pochodna po klasie zwierze reprezentujaca Krowe
class Cow: public Animal{

public:
//konstruktor pobierajacy wiek oraz imie krowy.
    Cow(int number,const  std::string name = "Cow");
//destruktor
    ~Cow();
//Metoda zwracajaca gos krowy
    virtual void saySomething() const;
};
