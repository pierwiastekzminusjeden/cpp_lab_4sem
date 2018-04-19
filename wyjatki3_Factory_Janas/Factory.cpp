#include <iostream>
#include "Factory.h"

Factory:: Factory(double start, double end): m_start(start), m_end(end){
    std::cout << "Build factory with range [" << m_start <<", " << m_end << "]"<<std::endl; 
}


Factory::~Factory(){
    for(unsigned int i = 0; i <m_values.size(); i++)
        delete m_values[i];
    m_values.clear();
    std::cout << "Factory destroyed." << std::endl;
}

Value * Factory::PrepareValue(const std::string name, double value){
    std::cout <<"Manufacturing value " << value << std::endl;
    Value *toRet = new Value(name, value);
    m_values.push_back(toRet);
    if (value < m_start || value > m_end ){
        OutOfRange exception(name, value, m_start, m_end, this);
        throw exception;
    }
    
    return toRet;
}