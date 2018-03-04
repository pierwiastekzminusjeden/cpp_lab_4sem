#include <iostream>
#include "Fit.h"

Fit::Fit() : m_exp("not declared"), m_sumxy(0),  m_sumxx(0), m_sumx(0), m_sumy(0),
             m_a(0), m_b(0), m_numberOfPoints(0){}

Fit::~Fit(){}

void Fit::appendPoint(const double xi, const double yi) const{
    std::cout << "Cannot add point (" << xi << ", " << yi << "), to const object" << std::endl;
}

void Fit::appendPoint(const double xi, const double yi){
    m_sumx += xi;
    m_sumxy += xi * yi;
    m_sumxx += xi * xi;
    m_sumy += yi;
    m_numberOfPoints++;

    set();
}

void Fit::print() const{
    std::cout << "This is " << m_exp << std::endl;
}