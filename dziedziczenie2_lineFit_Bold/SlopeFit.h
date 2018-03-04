#pragma once
#include <iostream>
#include <string>
#include "Fit.h"

class SlopeFit: public Fit{

public:
    SlopeFit(std::string expr);

    virtual FitResult &result();

    virtual void set(const double x, const double y);

  private:
    double m_a;
};
