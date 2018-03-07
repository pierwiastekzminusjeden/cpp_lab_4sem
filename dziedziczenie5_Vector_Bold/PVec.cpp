#include "PVec.h"

std::ostream &operator<<(std::ostream &strm, const PVec &vec){
    for (int i = 0; i < vec.m_counter; i++){
        vec.m_tab[i]->print(strm);
        std::cout << " ";
    }
    return strm;
}
PVec::~PVec(){
    for (int i = 0; i < m_counter; i++)
        delete m_tab[i];
}

PVec::PVec(){
    m_counter = 0;
}

void PVec::operator<<(Wrapper *obj){
    m_tab[m_counter] = obj;
    m_counter++;
}

Wrapper & PVec::operator[](int index) const{
    return *(m_tab[index]);
}

PVec & PVec::push_back(Wrapper *obj){
    m_tab[m_counter] = obj;
    m_counter++;
    return *this;
}

void IntWrapper::print(std::ostream &strm) const{
    strm << m_value;
}

void FloatWrapper::print(std::ostream &strm) const{
    strm << m_value;
}

void StringWrapper::print(std::ostream &strm) const{
    strm << m_value;
}
