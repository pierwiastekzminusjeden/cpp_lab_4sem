#pragma once
#include "FitResult.h"

//klasa bazowa re
class Fit{

public:
    Fit();

    virtual ~Fit();
//Stala metoda uruchamiajaca sie przy probie dopasowania punktow do prostej reprezentowanej przez staly obiekt. 
//Informuje o braku mozliwosci dodania danego punktu do prostej ???
    virtual void appendPoint(const double xi, const double yi) const;
//Metoda pozwalajaca na modyfikacje prostej tak aby przechodzila rowniez przez kolejny dodawany punkt. Informacje o punkcie nie sa zapisywane.
//Korzysta z metod pomocniczych setSf() oraz setLf().
    virtual void appendPoint(const double xi, const double yi);
//Metoda zwracajaca pomocniczy obiekt FitResult zawierajacy podstawowe informacje o prostej. Za pomoca obiektu zwracanego mozna wypisac informacje 
//o typie prostej oraz jej wspolczynnikach
    virtual FitResult &result() = 0;
//Metoda wypisujaca typ reprezentacji prostej (slope fit lub line fit)
    virtual void print() const;
//Metoda pomocnicza wykorzystywana przez metode appendPoint. Aktualizuje informacje o wspolczynniku a oraz b
    virtual void set(const double x = 0, const double y = 0) = 0;


protected:
//Zmienna przechowujaca informacje o typie reprezentacji prostej (slope fit lub Line Fit)
    std::string m_exp;
//Obiekt pomocniczy pozwalajacy na wypisanie podstawowych informacji o prostej oraz jej wspolczynnikach
    FitResult fitRes;
//Sumy poszczegolnych wsporzednych punktow pozwalajace na dopasowanie prostej do puktow oraz jej aktualizacje bez potrzeby przechowywania wszystkich wprowadzanych punktow.
    double m_sumxy, m_sumxx, m_sumx, m_sumy;
//Reprezentacja aktualnych wartosci wspolczynnikow a oraz b prostej
    double m_a, m_b;
// Informacja o liczbie wprowadzonych punktow. 
    int m_numberOfPoints;
};
