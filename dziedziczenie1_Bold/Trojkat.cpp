#include <iostream>
#include <cmath>
#include "Trojkat.h"
#include "Ksztalt.h"

Trojkat::Trojkat(int a, int b, int c){
    _bok[0] = a;
    _bok[1] = b;
    _bok[2] = c;
}

void Trojkat::wypisz(std::ostream &strm) const{
    std::cout << "Trojkat o bokach: " << _bok[0] << " " << _bok[1] << " " << _bok[2] << std::endl;
}

float Trojkat::polePow() const{
    float polowaObw = (_bok[0] + _bok[1] + _bok[2]) * 0.5;
    return sqrt(polowaObw * (polowaObw - _bok[0])*(polowaObw - _bok[1])*(polowaObw - _bok[2]));
}
