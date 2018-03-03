#include <iostream>
#include "LineFit.h"


LineFit::LineFit(std::string expr): Fit(){
    m_exp = expr;
    m_numberOfPoints = 0;
}

FitResult & LineFit::result(){
    fitRes.set("y = a * x + b", 2, m_a, m_b);
    return fitRes;
}
