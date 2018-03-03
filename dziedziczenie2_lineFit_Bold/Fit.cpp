#include <iostream>
#include "Fit.h"

Fit::Fit() : m_exp("not declared"), m_sumxy(0),  m_sumxx(0), m_sumx(0), m_sumy(0),
             m_a(0), m_b(0), m_numberOfPoints(0){
}

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

    if(m_exp == "slope fit")
        setSf();
    else
        setLf();
}

void Fit::print() const{
    std::cout << "This is " << m_exp << std::endl;
}

void Fit::setSf(){
    m_a = m_sumxy / m_sumxx;
}

void Fit::setLf(){
    m_a = (m_sumxy - m_sumx * m_sumy / m_numberOfPoints) / (m_sumxx - m_sumx * m_sumx / m_numberOfPoints);
    m_b = (m_sumy - m_a * m_sumx) / m_numberOfPoints;
}

