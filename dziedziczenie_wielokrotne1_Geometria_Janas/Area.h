#pragma once
#include <iostream>
#include <string>

// Klasa abstrakcyjna dzieki ktrej obliczane jest pole figury na plaszczyznie
class Area{

public:
//Metoda czysto wirtualna majaca za zadanie obliczanie pola figury plaskiej
    virtual double area() const = 0;
};
