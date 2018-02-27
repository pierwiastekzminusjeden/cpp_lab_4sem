#pragma once
#include <iostream>


class Ksztalt{

public:
    virtual ~Ksztalt(){};

    virtual void wypisz(std::ostream & strm) const = 0;

    virtual float polePow() const = 0;

  private:
 
};

void wypisz(const Ksztalt & doWypisania);
