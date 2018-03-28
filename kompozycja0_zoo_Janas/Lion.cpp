#include <iostream>
#include "Lion.h"

Lion::Lion(int number,const std::string name): Animal(number, name){
    m_voice = "Aghr!";
}

Lion::~Lion(){
    std::cout << "Bye Lion" << std::endl;    
}

void Lion::saySomething() const{  
    std::cout << "Lion: " << m_voice << std::endl;
}
