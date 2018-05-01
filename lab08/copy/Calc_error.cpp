#include <iostream>
#include <string>


#include "Calc_error.h"

Calc_error::Calc_error(std::runtime_error* err, const std::string &name, const std::string & file, int line):
    std::runtime_error(name), m_err(err), m_name(name), m_file(file), m_line(line){
}


Calc_error::~Calc_error(){
}


const char * Calc_error::what(){
    std::cout << m_name << ", [plik = " << m_file << ", linia = " << m_line <<"]" << std::endl;
    return m_err->what();
}


void Calc_error::throwError() const {
    throw m_err;
}


void Calc_error::handler(){
    std::cout << " Zlapano wyjatek:" << std::endl;

    try{
        throw;
    }
    catch(Calc_error * err){
        std::cout << " -- z powodu: ";
        err->what();
    }
    
}
