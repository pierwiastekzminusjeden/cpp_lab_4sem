#pragma once
#include "Figure.h"
#include "Area.h"

//Klasa pochodna reprezentujaca trojkat
class Triangle:public Figure, public Area{

public:
//konstruktor przyjmujacyt 3 punkty trojkata
    Triangle(Point x, Point y, Point z);
//Konstruktor kopiujacy
    Triangle(const Triangle & toCopy);
//destruktor
    ~Triangle();
//zwraca obwod trojkata
    virtual double length() const;
//Metoda wirtualna obliczajaca pole trojkata
    virtual double area() const;

private:
 
};
 