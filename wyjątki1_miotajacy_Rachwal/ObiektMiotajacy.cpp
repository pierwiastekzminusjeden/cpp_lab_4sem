#include "ObiektMiotajacy.h"



void Przetworz(typ * wyjatek){
    std::cout << "Przetworz - wyjatek typu "
        << wyjatek->typeNum() << " o adresie: " << &wyjatek <<std::endl;
        throw(dynamic_cast<typ4*>(wyjatek));
}


ObiektMiotajacy::ObiektMiotajacy(){}

void ObiektMiotajacy::Rzuc(){
    delete this;
    typ * wyjatek = new typ2();
    throw(dynamic_cast<typ2*>(wyjatek));
}
