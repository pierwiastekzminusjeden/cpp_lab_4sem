#include <iostream>
#include <string>

class CSilnik{
public:
    CSilnik(int konie, float pojemnosc, std::string typ);
    CSilnik(const CSilnik & toCopy);

private:
    int m_konie;
    float m_pojemnosc;
    std::string m_typ;
};

class CPojazd{
    friend std::ostream & operator <<(std::ostream &strm, const CPojazd &toShow);
public:
    CPojazd(CSilnik & silnik, std::string kolor, float licznik);

   virtual CPojazd & operator=(const CPojazd & toCopy);

    CPojazd(const CPojazd & toCopy);

    virtual ~CPojazd();
protected:
    CSilnik m_silnik;
    std::string m_kolor;
    int m_kola;
    float m_licznik;
};


class CSamochod: public CPojazd{
public:
    CSamochod(CSilnik & silnik, std::string kolor, float licznik);
};

class CMotorower: public CPojazd{
public:
    CMotorower(CSilnik & silnik, std::string kolor, float licznik);
};

class CMercedes: public CSamochod{
public:
    CMercedes(CSilnik & silnik, float licznik);
};

class CRomet: public CMotorower{
public:
    CRomet(CSilnik & silnik, float licznik);
};
