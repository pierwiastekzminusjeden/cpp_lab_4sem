#include <iostream>
#include "Animal.h"

Animal::Animal(int number,const  std::string name):m_name(name), m_age(number){
    std::cout << "Animal with age " << m_age << ", " << m_name <<std::endl;
}

Animal::~Animal(){}

void Animal::saySomething() const{  

}
void Animal::print() const {
     std::cout << "Animal with age " << m_age; 
}
