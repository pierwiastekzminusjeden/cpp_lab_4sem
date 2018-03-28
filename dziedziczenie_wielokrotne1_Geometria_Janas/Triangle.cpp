#include "Triangle.h"


Triangle::Triangle(Point x, Point y, Point z): Figure(3){
   m_points[0] = x;
   m_points[1] = y;
   m_points[2] = z;
}

Triangle::Triangle(const Triangle & toCopy): Figure(3){
    m_points[0] = toCopy.m_points[0];
    m_points[1] = toCopy.m_points[2];
    m_points[2] = toCopy.m_points[3];
}

Triangle::~Triangle(){}

double Triangle::area() const{

    return 0;
}

double Triangle::length() const{
    double len;
    len = m_points[0].distance(m_points[1]);
    len += m_points[1].distance(m_points[2]);
    len += m_points[2].distance(m_points[0]);
    return len;
}


