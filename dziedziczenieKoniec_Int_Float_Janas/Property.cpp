#include <iostream>
#include "Property.h"

std::ostream& operator<<(std::ostream &strm, Property &obj){
    return obj.friend_op(strm);
}

/////////////////////////////////////////////////////////////////

Property::~Property(){}

Property * Property::getClass() const{
    return new Property();
}
std::ostream & Property::friend_op(std::ostream &strm){
    return strm << "EMPTY";
}

/////////////////////////////////////////////////////////////////

Property_Int::Property_Int(int x): m_data(x){}

void Property_Int::modulo(int mod){
    m_data = m_data%mod;
}

Property_Int * Property_Int::getClass() const{
    return new Property_Int(m_data);
}
std::ostream & Property_Int::friend_op(std::ostream &strm){
    return strm << m_data << "i";
}

//////////////////////////////////////////////////////////////////

Property_Float::Property_Float(float x): m_data(x){}

void Property_Float::inverse(){
    m_data = 1./m_data;
}
Property_Float * Property_Float::getClass() const{
    return new Property_Float(m_data);
}
std::ostream &  Property_Float::friend_op(std::ostream &strm){
    return strm << m_data << "f";
}