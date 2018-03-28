#include <iostream>
#include "Cow.h"

Cow::Cow(int number,const  std::string name): Animal(number, name){
    m_voice = "Muuu...";
}

Cow::~Cow(){
    std::cout << "Bye Cow" << std::endl;
}

void Cow::saySomething() const{  
    std::cout << "Cow: " << m_voice << std::endl;
}