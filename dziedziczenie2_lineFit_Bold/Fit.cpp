#include <iostream>
#include "Fit.h"

Fit::Fit() : m_exp("not declared"), m_sumxy(0),  m_sumxx(0), m_numberOfPoints(0){}

Fit::~Fit(){}

void Fit::appendPoint(const double xi, const double yi) const{
    std::cout << "Cannot add point (" << xi << ", " << yi << "), to const object" << std::endl;
}

void Fit::appendPoint(const double xi, const double yi){
    m_numberOfPoints++;
    m_sumxy += xi * yi;
    m_sumxx += xi * xi;
    set(xi, yi);
}

void Fit::print() const{
    std::cout << "This is " << m_exp << std::endl;
}
