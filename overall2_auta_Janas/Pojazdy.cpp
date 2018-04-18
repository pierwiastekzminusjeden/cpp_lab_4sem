#include "Pojazdy.h"


std::ostream & operator<<(std::ostream &strm,const PredkoscMaksymalna & predkosc){
    strm << predkosc.m_predkosc << "km/h";
    return strm;
}


//////////////////////////////PredkoscMaksymalna
PredkoscMaksymalna::PredkoscMaksymalna(int predkosc): m_predkosc(predkosc){ }

PredkoscMaksymalna::~PredkoscMaksymalna(){
}



/////////////////////////////////Samochod
Samochod::Samochod(PredkoscMaksymalna predkosc): m_predkosc(predkosc){  }

std::string Samochod::rodzaj() const{
    return "Samochod"; 
}

const PredkoscMaksymalna & Samochod::predkoscMaksymalna() const{
    return m_predkosc;
}


Samochod::~Samochod(){

}    



/////////////////////////////////Motorowka
Motorowka::Motorowka(PredkoscMaksymalna predkosc): m_predkosc(predkosc){ 
}

std::string Motorowka::rodzaj() const{
    return "Motorowka";
}

const PredkoscMaksymalna & Motorowka::predkoscMaksymalna() const{
    return m_predkosc;
}


Motorowka::~Motorowka(){

}



/////////////////////////////////Rower
Rower::Rower(){

}

std::string Rower::rodzaj() const{
    return "Rower";
}

Rower::~Rower(){

}



/////////////////////////////////amfibia
Amfibia::Amfibia(PredkoscMaksymalna ladowa, PredkoscMaksymalna wodna):Samochod(ladowa), Motorowka(wodna){

}


std::string Amfibia::rodzaj() const{
    return "Amfibia";
}

   
Amfibia::~Amfibia(){

}
