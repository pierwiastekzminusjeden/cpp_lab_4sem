#pragma once
#include <string>
#include <iostream> 


//klasa pomocnicza wyświetlająca informacje
class FitResult{
    friend class SlopeFit;
    friend class LineFit;
    friend class Fit;

public:    
    void set(std::string expression, int numberOfParams, double val0, double val1 = 0);

    std::string expression() const;

    char parameterName(int i) const;

    float parameterValue(int i) const;
    
    int nParams() const;

private:
    char m_name[2];
    std::string m_expression;
    int m_numberOfParams;
    double m_values[2];
};
