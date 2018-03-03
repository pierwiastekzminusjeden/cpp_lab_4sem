#include <iostream>
#include "FitResult.h"


void FitResult::set(std::string expression, int numberOfParams, double val0, double val1){
    m_expression = expression;
    m_numberOfParams = numberOfParams;
    m_name[0] = 'a';
    m_name[1] = 'b';
    m_values[0] = val0;
    m_values[1] = val1;
}
std::string FitResult::expression() const{
    return m_expression;
}

char FitResult::parameterName(int i) const{
    return m_name[i];
}

float FitResult::parameterValue(int i) const{
    return m_values[i];
}

int FitResult::nParams() const{
    return m_numberOfParams;
}
