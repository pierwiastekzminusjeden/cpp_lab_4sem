#pragma once
#include <iostream>

class Mebel{

friend std::ostream & operator<<(std::ostream &strm, const Mebel &mebel);

public:
    Mebel(const int sz, const int wys, const int dl): m_sz(sz), m_wys(wys), m_dl(dl){};
    
    virtual void output(std::ostream & strm) const; 

    virtual ~Mebel();

protected:
    int m_sz;
    int m_wys;
    int m_dl;
};
