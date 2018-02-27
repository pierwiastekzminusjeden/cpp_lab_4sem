#pragma once
#include "Ksztalt.h"

class Kwadrat: public Ksztalt{

public:
    Kwadrat(int bok) : _bok(bok){};

    virtual void wypisz(std::ostream & strm) const;

    virtual float polePow() const;

private:
    int _bok;
};
