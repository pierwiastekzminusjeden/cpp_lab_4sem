#pragma once
#include "FitResult.h"
//klasa bazowa
class Fit{

public:
    Fit();

    virtual ~Fit();

    virtual void appendPoint(const double xi, const double yi) const = 0;

    virtual FitResult &result() const = 0;

    virtual void print() const;
protected:
    std::string m_exp;
};
