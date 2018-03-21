#include <iostream>
#include "Dir.h"

Dir::Dir(const std::string name): File(name){
    m_iter = 0;
    
}

Dir::~Dir(){
    for(int i = 0; i < m_iter; i++)
        delete m_files[i];
}


Dir * Dir::operator+=(File * toAdd){
    if(m_iter < 10){
        m_files[m_iter++] = toAdd;
        m_indent++;
    }
    return this;
}

const File * Dir::get(std::string toSearch ) const{
    if(m_name == toSearch)
        return this;
    for(int i = 0; i < m_iter ; i++){
        if(toSearch == m_files[i]->getName() );
        return m_files[i];
    }
    return NULL;
}