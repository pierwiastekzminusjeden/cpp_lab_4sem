#pragma once
#include <string>
#include <iostream> 


//klasa pomocnicza wyświetlająca informacje
class FitResult{

public:
    FitResult();

    FitResult(int numberOfParams, std::string exp, int a, int b = 0);

    ~FitResult();

    std::string expression() const;

    char parameterName(int i) const;

    float parameterValue(int i) const;
    
    int nParams() const;

private:
    int m_name[2];
    std::string m_exp;
    int m_numberOfParams;
};
