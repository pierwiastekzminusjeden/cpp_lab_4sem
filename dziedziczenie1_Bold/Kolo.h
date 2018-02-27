#pragma once
#include "Ksztalt.h"

class Kolo : public Ksztalt{

public:
    Kolo(int promien): _promien(promien){};

    virtual void wypisz(std::ostream &strm) const;

    virtual float polePow() const;

private:
    int _promien;
};
