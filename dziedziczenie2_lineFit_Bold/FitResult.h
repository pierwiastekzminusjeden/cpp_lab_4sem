#pragma once
#include <string>
#include <iostream> 


//klasa pomocnicza pozwalajaca na wydajne wypisanie ifnormacji o reprezentacji prostej oraz jej wspolczynnikow.
class FitResult{
    friend class SlopeFit;
    friend class LineFit;
    friend class Fit;

public:    
//Metoda ustawiajaca poszczegolne pola na zadane w argumentach wartosci. Przyjmuje opis reprezentaji prostej jako wzor matematyczny, liczbe wspolczynnikow, wart
//wspolczynnika a oraz wart wspolczynnika b. 
    void set(std::string expression, int numberOfParams, double val0, double val1 = 0);
//zwraca opis reprezentacji prostej w postaci wzoru matematycznego
    std::string expression() const;
//zwraca nazwe wspolczynnika przy prostej (a lub b)
    char parameterName(int i) const;
//Zwraca wartosc wspolczynnika przy prostej (a lub b)
    float parameterValue(int i) const;
//Zwraca liczbe wspolczynnikow prostej (od 1 do 2)
    int nParams() const;

private:
//Tablica dwuelementowa przechowujaca nazwy wspolczynnikow prostej
    char m_name[2];
//obiekt klasy string przechowujacy opsi reprezentacji prostej w postaci wzoru amtematycznego
    std::string m_expression;
//Liczba wspolczynnikow prostej (1 do 2)
    int m_numberOfParams;
//Tablica dwuelementowa przechowujaca wartossci odpowiednich wspolczynnikow prostej.
    double m_values[2];
};
