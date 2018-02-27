#include <iostream>
#include "Kwadrat.h"

void Kwadrat::wypisz(std::ostream & strm) const{
    std::cout << "Kwadrat o boku: " << _bok << std::endl;
}

float Kwadrat::polePow() const{
    return _bok * _bok;
}