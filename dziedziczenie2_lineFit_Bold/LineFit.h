#pragma once
#include <iostream>
#include <string>
#include "Fit.h"
//#include "FitResult.h"

class LineFit: public Fit{

public:    
//konstruktor przyjmujacy opsi prostej w postaci slownej
    LineFit(std::string exp);
//Metoda zwracajaca pomocniczy obiekt FitResult zawierajacy podstawowe informacje o prostej. Za pomoca obiektu zwracanego mozna wypisac informacje
//o typie prostej oraz jej wspolczynnikach. Korzysta z FitResult::set()
    virtual FitResult &result();
};

