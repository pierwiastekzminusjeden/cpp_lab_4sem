#pragma once
#include "Figure.h"
#include "Area.h"

//Klasa reprezentujaca kolo
class Circle: public Figure, public Area{

public:
//konstruktor pobierajacy srodek kola oraz promien
    Circle(Point x,  double r);
//destruktor
    ~Circle();
//Metoda sluzaca obliczeniu pola kola
    virtual double area() const;
//Wypisuje informacje o kole
    virtual void print() const;
//Obwod kola
    virtual double length() const;
//Przeskalowanie obiektu
    virtual void scale(const Point & p, const double scale);

private:
//Przechowanie promienia
    double m_radius;
};
