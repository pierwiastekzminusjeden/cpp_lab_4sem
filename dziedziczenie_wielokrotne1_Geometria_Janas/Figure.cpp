#include "Figure.h"

Figure::Figure(int numOfPoints): m_numOfPoints(numOfPoints){
    m_points = new Point [numOfPoints];
}

Figure::~Figure(){
    if(m_points)
        delete [] m_points;    
    m_points = NULL;
}

void Figure::print() const{
    std::cout << "Figure : [";
    for (int i = 0; i < m_numOfPoints; i ++)
        std::cout << m_points[i] << " ";
    std::cout << "]" << std::endl; 
}

double Figure::length() const{
    double len;
    len = m_points[1].distance(m_points[0]);
    return len;
}

void Figure::setPoint(int pos, double x, double y){
    m_points[pos].setCoordinates(x,y);
        
}

void Figure::move(const double x, const double y){
    for(int i = 0 ; i < m_numOfPoints; i++)
        m_points[i].move(x,y);
}

void Figure::scale(const Point & p, const double scale){
    for(int i = 0 ; i < m_numOfPoints; i++)
        m_points[i].scale(p, scale);
}
    
void Figure::rotate(const Point & p, const double angle){
    for(int i = 0 ; i < m_numOfPoints; i++)
        m_points[i].rotate(p, angle);
}

