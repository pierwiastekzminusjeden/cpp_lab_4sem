#include <iostream>
#include "Sheep.h"

Sheep::Sheep(int number, const std::string name): Animal(number, name){
    m_voice = " ";
}

Sheep::~Sheep(){
    std::cout << "Bye Sheep" << std::endl;
}

void Sheep::saySomething() const{  
    std::cout << "Sheep: " << m_voice << std::endl;
}