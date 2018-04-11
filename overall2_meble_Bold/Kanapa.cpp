#include <iostream>
#include "Kanapa.h"



void Kanapa::output(std::ostream & strm) const{
    Mebel::output(strm);
    strm <<" "<< std::endl;
    Sofa::output(strm);
    strm <<" " << std::endl;
    Lozko::output(strm);
}


Kanapa::~Kanapa(){
    std::cout << "~Kanapa" << std::endl;

}
