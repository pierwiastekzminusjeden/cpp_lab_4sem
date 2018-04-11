#include <iostream>
#include "Mebel.h"

std::ostream & operator<<(std::ostream &strm, const Mebel &mebel){
    mebel.output(strm);
    return strm;
}


void Mebel::output(std::ostream & strm) const{
    strm << " Mebel: sz:" << this->m_sz << " wys:" << this->m_wys << " dl:" << this->m_dl;
} 


Mebel::~Mebel(){
    std::cout << "~Mebel" << std::endl;
}
