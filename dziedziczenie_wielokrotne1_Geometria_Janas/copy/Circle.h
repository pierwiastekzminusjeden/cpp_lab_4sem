#pragma once
#include "Figure.h"
#include "Area.h"

class Circle: public Figure, public Area{

public:
    Circle(Point x,  double r);

    ~Circle();

    virtual double area() const;
    
private:
    double m_radius;
};
