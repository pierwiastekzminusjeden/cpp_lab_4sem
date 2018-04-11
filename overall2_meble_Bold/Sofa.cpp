#include <iostream>
#include "Sofa.h"



void Sofa::output(std::ostream & strm) const{
    Mebel::output(strm);
    strm <<  "  siedzisko:" << m_siedzisko;

} 


Sofa::~Sofa(){
    std::cout << "~Sofa" << std::endl;

}
