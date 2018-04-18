#include "typ.h"


std::ostream & operator<<(std::ostream & strm, const typ & wyjatek){
    wyjatek.stream(strm);
    return strm;
}

void typ1::PrzedstawSie() const{
    std::cout << "Nazywam sie 1" << std::endl;
}

int typ1::typeNum() const{
    return 1;
}

void typ1::stream(std::ostream & strm) const{
    strm << this; 
}

void typ2::PrzedstawSie() const{
    std::cout << "Nazywam sie 2"<< std::endl;
}

int typ2::typeNum() const{
    return 2;
}

void typ2::stream(std::ostream & strm) const{
    strm << this ; 
}



void typ3::PrzedstawSie() const{
    std::cout << "Nazywam sie 3"<< std::endl;
}

int typ3::typeNum() const{
    return 3;
}

void typ3::stream(std::ostream & strm) const{
    strm << this ; 
}


void typ4::PrzedstawSie() const{
   std::cout << "Nazywam sie 4"<< std::endl;
}

int typ4::typeNum() const{
    return 4;
}

void typ4::stream(std::ostream & strm) const{
    strm << this ; 
}