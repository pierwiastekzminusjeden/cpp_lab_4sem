#include <iostream>
#include "Kolo.h"

void Kolo::wypisz(std::ostream &strm) const{
    std::cout << "Kolo o promieniu:" << _promien << std::endl;
}

float Kolo::polePow() const{
    return (_promien * _promien * 3.1415);
}