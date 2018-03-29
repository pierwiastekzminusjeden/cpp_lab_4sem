#pragma once
#include <iostream>
#include <string>

class Property;
std::ostream& operator<<(std::ostream &strm, Property & obj);

///////////////////////////////////////////////////////
//Klasa bazowa po ktrej dziedzicza klasy operujace na liczbach roznych typow
class Property{
public:
//destruktor wirtualny
    virtual ~Property();
//Zwraca kopie obiektu w postaci wskaźnika
    virtual Property * getClass() const;
//funkcja pomocnicza do "dziedziczenia przyjazni" Pozwala na wykorzystanie przeciazenia strumienia <<
    virtual std::ostream & friend_op(std::ostream &strm);
};

////////////////////////////////////////////////////////////////////////

//Klasa odpowiadajaca za przechowywanie liczbe typu int
class Property_Int: public Property{
public:
//konstruktor
    Property_Int(int x);
//Funkcja wykonujaca operacje dzielenia modulo
    void modulo(int mod);
//Zwraca kopie obiektu w postaci wskaźnika
    virtual Property_Int * getClass() const;
//funkcja pomocnicza do "dziedziczenia przyjazni" Pozwala na wykorzystanie przeciazenia strumienia <<
    virtual std::ostream & friend_op(std::ostream &strm);
private:
//Dane - liczba typu int
    int m_data; 
};

///////////////////////////////////////////////////////////////////////////////

//Klasa odpowiadajaca za przechowywanie liczbe typu flaoat
class Property_Float: public Property{
public:
//konstruktor
    Property_Float(float x);
//funkcja pozwalajaca wykonac operacje odwrocenia liczby
    void inverse();
//Zwraca kopie obiektu w postaci wskaźnika
    virtual Property_Float * getClass() const;
//funkcja pomocnicza do "dziedziczenia przyjazni" Pozwala na wykorzystanie przeciazenia strumienia <<
    virtual std::ostream & friend_op(std::ostream &strm);
private:
//dane - liczba typu float
    float m_data;
};
