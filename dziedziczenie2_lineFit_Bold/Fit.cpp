#include <iostream>
#include "Fit.h"

Fit::Fit(){

}
Fit::~Fit(){
}

void Fit::print() const{
    std::cout << "this is " << m_exp << std::endl;
}