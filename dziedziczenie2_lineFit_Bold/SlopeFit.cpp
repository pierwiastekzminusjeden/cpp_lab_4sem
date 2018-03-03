#include <iostream>
#include "SlopeFit.h"


SlopeFit::SlopeFit(std::string expr): Fit(){
    m_exp = expr;
    m_numberOfPoints = 0;
}

FitResult & SlopeFit::result(){
    fitRes.set("y = a * x", 1, m_a);
    return fitRes;
}
