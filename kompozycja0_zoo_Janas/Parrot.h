#pragma once
#include "Animal.h"

//Klasa pochodna po klasie zwierze reprezentujaca Papuge
class Parrot: public Animal{

public:
//konstruktor pobierajacy wiek oraz imie Papugi.
    Parrot(int number,const std::string name = "Parrot");

    ~Parrot();
//Metoda zwracajaca gos Papugi (w tym przypadku jej imie)
    virtual void saySomething() const;
    
};
