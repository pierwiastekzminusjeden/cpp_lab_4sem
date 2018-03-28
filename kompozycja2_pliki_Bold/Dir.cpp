#include <iostream>
#include "Dir.h"

Dir::Dir(const std::string name): File(name){
    m_iter = 0;
}

Dir::~Dir(){
    std::cout << "Deleting Dir:  " << m_name << std::endl;
    for(int i = 0; i < m_iter; i++){
        std::cout << "About to delete: " << m_files[i]->getName() << std::endl;
        delete m_files[i];
    }
}

Dir * Dir::operator+=(File * toAdd){
    if(m_iter < 10){
        m_files[m_iter++] = toAdd;
    }
    return this;
}

const File * Dir::get(const std::string toSearch ) const{
    if(m_name == toSearch)
        return this;

    for(int i = 0; i < m_iter ; i++){
        if(toSearch == m_files[i]->getName()){
            return m_files[i];
        }
    }
    return NULL;
}

std::ostream & Dir::print(std::ostream &strm, int indent) const{
    
    strm << m_name;

    for(int i=0; i< m_iter; i++){    
        strm << "\n";
        for(int sp = 0; sp < indent; sp++)
            strm << " "; 
            m_files[i]->print(strm,indent + 2);
    }
    
    return strm;
}
