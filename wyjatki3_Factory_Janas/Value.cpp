#include <iostream>
#include "Value.h"

Value::Value(){

}

Value::Value(const std::string name, double value):m_name(name), m_value(value){
}


Value::~Value(){
    std::cout <<"Destroying value " << m_value << std::endl;
}

void Value::Print() const{
    std::cout << m_name << " = " << m_value << std::endl;
}
