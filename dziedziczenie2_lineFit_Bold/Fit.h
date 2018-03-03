#pragma once
#include "FitResult.h"

//klasa bazowa
class Fit{

public:
    Fit();

    virtual ~Fit();

    virtual void appendPoint(const double xi, const double yi) const;

    virtual void appendPoint(const double xi, const double yi);

    virtual FitResult &result() = 0;

    virtual void print() const;

    virtual void setSf();

    virtual void setLf();

protected:
    std::string m_exp;

    FitResult fitRes;

    double m_sumxy, m_sumxx, m_sumx, m_sumy;

    double m_a, m_b;
     
    int m_numberOfPoints;
};
