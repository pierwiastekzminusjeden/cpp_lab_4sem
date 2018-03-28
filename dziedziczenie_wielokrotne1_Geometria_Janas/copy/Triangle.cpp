#include <iostream>
#include "Triangle.h"


Triangle::Triangle(Point x, Point y, Point z): Figure(3){

}

Triangle::Triangle(const Triangle & toCopy): Figure(3){

}

Triangle::~Triangle(){

}

void Triangle::move(const double x, const double y){

}
    
void Triangle::scale(const Point & p, const double scale){

}
    
void Triangle::rotate(const Point & p, const double angle){

}

double Triangle::area() const{

    return 0;
}