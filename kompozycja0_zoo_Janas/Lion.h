#pragma once
#include "Animal.h"

//Klasa pochodna po klasie zwierze reprezentujaca Lwa
class Lion: public Animal{

public:
//konstruktor pobierajacy wiek oraz imie Lwa
    Lion(int number,const std::string name = "Lion");

    ~Lion();
//Metoda zwracajaca gos Lwa 
    virtual void saySomething() const;
};
