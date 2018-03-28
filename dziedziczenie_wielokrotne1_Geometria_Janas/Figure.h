#pragma once
#include <iostream>
#include <cmath>
#include "Transformable.h"
#include "Point.h"

//Klasa reprezentujaca zbior punktow na plaszczyznie
class Figure: public Transformable{

public:
//konstruktor przyjmujacy ilosc punktow. Alokuje pamiec na tablice wskaznikow na obiekty klasy Punkt
    Figure(int numOfPoints);
//Destruktor. Dealokuje pamiec zaalokowana na punkty w kosnstruktorze
    ~Figure();
//Wypisuje Figure w postaci zbioru punktw
    virtual void print() const;
//Podaje dlugosc pomiedzy dwoma pierwszymi punktami zbioru
    virtual double length() const;
//Ustawia punkt na zadanej pozycji w tablicy
    void setPoint(int pos, double x, double y);
//Przemieszcza wszytkie punkty
    virtual void move(const double x, const double y);
//Przeskalowuje zbior punktow
    virtual void scale(const Point & p, const double scale);
//dok0onuje rotacji figury
	virtual void rotate(const Point & p, const double angle);
protected:
//Tablica wskaznikow na obiekty klasy Punkt
    Point *m_points;
//Informacja o liczbie elementow w tablicy
    int m_numOfPoints;
 
};
