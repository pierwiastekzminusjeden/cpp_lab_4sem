#include "Main.h"

std::ostream & operator <<(std::ostream &strm, const CPojazd &toShow){
    strm<<std::endl;
    strm << "Liczba Kol: " << toShow.m_kola <<std::endl;
    strm << "Stan Licznika: " << toShow.m_licznik << "[km]" << std::endl;
    strm << "Kolor: " << toShow.m_kolor <<std::endl;
    return strm;
}

CSilnik::CSilnik(int konie, float pojemnosc, std::string typ){
    m_konie = konie;
    m_pojemnosc = pojemnosc;
    m_typ = typ;
}


CSilnik::CSilnik(const CSilnik & toCopy){
    m_konie = toCopy.m_konie;
    m_pojemnosc =toCopy.m_pojemnosc;
    m_typ = toCopy.m_typ;
}


CPojazd::CPojazd(CSilnik & silnik, std::string kolor, float licznik): m_silnik(silnik){
    m_kolor = kolor;
    m_licznik = licznik;
}

CPojazd & CPojazd::operator=(const CPojazd & toCopy){
    m_kola = toCopy.m_kola;
    m_kolor =toCopy.m_kolor;
    m_silnik = toCopy.m_silnik;
    m_licznik = 0.0;
}

CPojazd::CPojazd(const CPojazd & toCopy): m_silnik(toCopy.m_silnik){
    m_kola = toCopy.m_kola;
    m_kolor =toCopy.m_kolor;
    // m_silnik = toCopy.m_silnik;
    m_licznik = 0.0;
}


CPojazd::~CPojazd(){
}

CSamochod::CSamochod(CSilnik & silnik, std::string kolor, float licznik): CPojazd(silnik,kolor, licznik){
    m_kola = 4;
}

CMotorower::CMotorower(CSilnik & silnik, std::string kolor, float licznik): CPojazd(silnik,kolor, licznik){
    m_kola = 2;
}


CMercedes::CMercedes(CSilnik & silnik, float licznik): CSamochod(silnik,"Czarny Metalic", licznik){}


CRomet::CRomet(CSilnik & silnik, float licznik): CMotorower(silnik,"Czarny Metalic", licznik){}



