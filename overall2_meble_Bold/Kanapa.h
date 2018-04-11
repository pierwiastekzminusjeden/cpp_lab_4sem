#pragma once
#include "Lozko.h"
#include "Sofa.h"


class Kanapa:public Sofa, public Lozko{

public:
    Kanapa(int sz, int wys, int dl, int siedzisko, int szsp ):Mebel(sz,wys,dl),Sofa(sz,wys,dl,siedzisko), Lozko(sz,wys,dl,szsp) {};

    virtual void output(std::ostream & strm) const; 

    ~Kanapa();

};
