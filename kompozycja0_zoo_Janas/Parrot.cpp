#include <iostream>
#include "Parrot.h"

Parrot::Parrot(int number,const std::string name): Animal(number, name){
}

Parrot::~Parrot(){
    std::cout << "Bye Parrot" << std::endl;    
}

void Parrot::saySomething() const{  
    std::cout << "Parrot: " << m_name << ". " <<m_name << "!" << std::endl;
}