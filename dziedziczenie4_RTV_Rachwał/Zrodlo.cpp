#include <iostream>
#include "Zrodlo.h"

Zrodlo::Zrodlo(char znak){
    m_znak = znak;
    m_nazwa = "nie zidentyfikowano";
}

char Zrodlo::wyswietl() const{
    return m_znak;
}

std::string Zrodlo::nazwa() const{
    return m_nazwa;
}
