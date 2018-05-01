#include <iostream>
#include "LicznikPoziomow.h"


int LicznikPoziomow::m_counter = 0;

LicznikPoziomow::LicznikPoziomow(){
    std::cout << "Rozpoczynamy poziom numer " << ++m_counter << "." <<std::endl;
}

LicznikPoziomow::~LicznikPoziomow(){
    std::cout << "Konczymy poziom numer " << m_counter-- << "." <<std::endl;
}
