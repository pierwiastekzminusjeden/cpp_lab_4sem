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
void LineFit::set(){
    m_a = (m_sumxy - m_sumx * m_sumy / m_numberOfPoints) / (m_sumxx - m_sumx * m_sumx / m_numberOfPoints);
    m_b = (m_sumy - m_a * m_sumx) / m_numberOfPoints;
}
