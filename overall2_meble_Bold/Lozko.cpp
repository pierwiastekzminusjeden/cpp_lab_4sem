#include <iostream>
#include "Lozko.h"


void Lozko::output(std::ostream & strm) const{
    Mebel::output(strm);
    strm <<  "  sz.spania:" << m_szSp;
    
}

Lozko::~Lozko(){
    std::cout << "~Lozko" << std::endl;

}
