#include <iostream>
#include <string>
#include "Calc_error.h"


Calc_error::Calc_error(std::runtime_error* err, const std::string &name, const std::string & file, int line):
    std::runtime_error(name), m_err(err), m_file(file), m_line(line){
}

Calc_error::~Calc_error() throw(){}


void Calc_error::print() const{
    std::cout << this->what() << ", [plik = " << m_file << ", linia = " << m_line <<"]" << std::endl;
}

void Calc_error::handler(){

    try{
        throw;
    }

    catch(std::runtime_error * err){    
        std::cout << " Zlapano wyjatek:" << std::endl;
        
        while(err){
            std::cout << " -- z powodu: ";

            Calc_error * calcExcept = dynamic_cast<Calc_error *>(err);
            if(calcExcept){
                calcExcept->print();
                err = calcExcept->m_err;
                delete calcExcept;
            }
            else{
                std::cout << err->what() << std::endl;
                delete err;
                break;
            }
        }
    }
}
