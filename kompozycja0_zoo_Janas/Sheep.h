#pragma once
#include "Animal.h"
//Klasa pochodna po klasie zwierze reprezentujaca Papuge
class Sheep: public Animal{

public:
//konstruktor pobierajacy wiek oraz imie Owcy.
    Sheep(int number, const std::string name = "Sheep");

    ~Sheep();
//Metoda zwracajaca gos owcy
    virtual void saySomething() const;
 
};
