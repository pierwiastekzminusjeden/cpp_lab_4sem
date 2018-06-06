#pragma once
#include <iostream>
#include <iomanip>

//klasa pomocnicza wypisujaca na ekran wyrazenie dowolnego typu. Numeruje linie 
//oraz robi wciecia zadanej dlugosci
class NicePrinter{

public:

//konstruktor parametr ustala wciecia
    NicePrinter(int width);
    
//szablonowe przeciazenie operatora nawiasow (). Pozwala na wygodne wypisywanie wyrazen
    template <typename T> void operator()(const T & toPrint){
        std::cout << std::setw(m_width) << m_line++ << ": " << toPrint << std::endl;
    }

private:

// Zmienna przechowujaca dlugosc wciecia
    int m_width;

//statyczny licznik linii.
    static int m_line;
};


