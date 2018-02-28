#pragma once
#include <iostream>
#include <string>
#include "Fit.h"
//#include "FitResult.h"

class LineFit: public Fit{

public:
    LineFit();
    
    LineFit(std::string exp);
    
    ~LineFit();

    virtual void appendPoint(const double xi, const double yi) const;

    virtual FitResult &result() const;

protected:
    std::string m_exp;
private:
    double m_sumx;

    double m_sumy;

    int m_numberOfParams;

    double a, b;
};

