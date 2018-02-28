#pragma once
#include <iostream>
#include <string>
#include "Fit.h"

class SlopeFit: public Fit{

public:
    SlopeFit();

    SlopeFit(std::string exp);

    ~SlopeFit();

    virtual void appendPoint(const double xi, const double yi) const;

    virtual FitResult &result() const;

protected:
    std::string m_exp;
    
private:
    double m_sumx;

    double m_sumy;

    int m_numberOfParams;

    double a;
};
