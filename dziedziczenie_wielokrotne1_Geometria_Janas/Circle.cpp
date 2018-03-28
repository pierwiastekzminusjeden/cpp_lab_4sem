#include "Circle.h"

Circle::Circle(Point x,  double r): Figure(1), m_radius(r){
    m_points[0] = x;
}

Circle::~Circle(){
}

double Circle::area() const{

    return Transformable::PI * m_radius * m_radius;
}

void Circle::print() const{
    std::cout << "Circle : O";
    std::cout << m_points[0] << " ";
    std::cout << ", radius = " << m_radius << std::endl; 
}

double Circle::length() const{
    double len;
    len = 2*Transformable::PI * m_radius;
    return len;
}

void Circle::scale(const Point & p, const double scale){
    m_radius *= scale;
}