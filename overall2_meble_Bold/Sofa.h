#pragma once
#include "Mebel.h"

class Sofa:public virtual Mebel{

public:
    Sofa(int sz, int wys, int dl, int siedzisko ):Mebel(sz,wys,dl), m_siedzisko(siedzisko){};

    virtual void output(std::ostream & strm) const; 

    virtual ~Sofa();

protected:
    int m_siedzisko;
};

