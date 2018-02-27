#pragma once
#include "Ksztalt.h"

class Trojkat: public Ksztalt{

public:
    Trojkat(int a, int b, int c);

    virtual void wypisz(std::ostream &strm) const;

    virtual float polePow() const;

private:
    int _bok[3];
};
