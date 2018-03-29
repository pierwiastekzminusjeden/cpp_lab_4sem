#include <iostream>
#include "ProArray.h"

ProArray::ProArray(int size): m_size(size){
    m_arr = new Property *[size];
    for(int i = 0; i < m_size; i++)
        m_arr[i] = new Property();
}

ProArray::~ProArray(){
    for(int i = 0; i < m_size; i++)
        delete m_arr[i];
    delete [] m_arr;
}

void ProArray::set(int pos, const Property & data){
    if(pos >= m_size)
        return;
    delete m_arr[pos];
    m_arr[pos] = data.getClass();

}
    
void ProArray::printAll() const{
    std::cout << "{";
    for(int i = 0; i < m_size; i++){
        std::cout << *m_arr[i];
        if(i < m_size - 1)
            std::cout << ", ";
    }
    std::cout << "}" << std::endl;
}
