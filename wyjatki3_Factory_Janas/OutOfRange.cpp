#include <iostream>
#include "OutOfRange.h"


//Ze wzgledu na krwotok z brody nie zdazylem naprawic i napisac zgodnie ze sztuka.
std::ostream & operator<<(std::ostream & strm, const OutOfRange & exception){
    strm <<"Value named: " <<  exception.m_excName << " has value "<< exception.m_validValue << " which is outside of the allowed range: [" 
        << exception.m_startRange << ", "<< exception.m_endRange << "]";
    return strm;
}


OutOfRange::OutOfRange(const std::string name, double value, double start, double end, Factory * factory):m_excName(name), m_validValue(value),
    m_startRange(start), m_endRange(end), m_factory(factory){

}

OutOfRange::~OutOfRange(){
}


void OutOfRange::CleanFactory(){
    delete m_factory;
}
