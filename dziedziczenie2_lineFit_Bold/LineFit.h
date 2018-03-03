#pragma once
#include <iostream>
#include <string>
#include "Fit.h"
//#include "FitResult.h"

class LineFit: public Fit{

public:    
    LineFit(std::string exp);
    
    virtual FitResult &result();
};

