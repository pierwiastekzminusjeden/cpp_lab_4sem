#include "typ.h"


std::ostream & operator<<(std::ostream & strm, const typ & wyjatek){
    wyjatek.stream(strm);
    return strm;
}

void typ1::PrzedstawSie() const{
    std::cout << "Nazywam sie 1";

}

void typ1::stream(std::ostream & strm) const{
    strm << 1 ; 
}




void typ2::PrzedstawSie() const{
    std::cout << "Nazywam sie 2";
}

void typ2::stream(std::ostream & strm) const{
    strm << 2 ; 
}



void typ3::PrzedstawSie() const{
    std::cout << "Nazywam sie 3";
}

void typ3::stream(std::ostream & strm) const{
    strm << 3 ; 
}


void typ4::PrzedstawSie() const{
   std::cout << "Nazywam sie 4";
}

void typ4::stream(std::ostream & strm) const{
    strm << 4 ; 
}