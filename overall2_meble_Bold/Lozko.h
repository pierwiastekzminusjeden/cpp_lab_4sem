#pragma once
#include "Mebel.h"

class Lozko: public virtual Mebel{


public:
    Lozko(int sz, int wys, int dl, int szsp ): Mebel(sz,wys,dl), m_szSp(szsp){};

    virtual void output(std::ostream & strm) const; 

    virtual ~Lozko();

protected:
    int m_szSp;
};
