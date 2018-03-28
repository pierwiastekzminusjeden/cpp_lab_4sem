#pragma once
#include "Figure.h"
#include "Area.h"

class Triangle:public Figure, public Area{

public:
    Triangle(Point x, Point y, Point z);

    Triangle(const Triangle & toCopy);

    ~Triangle();

    virtual void move(const double x, const double y);
    
    virtual void scale(const Point & p, const double scale);
    
	virtual void rotate(const Point & p, const double angle);

    virtual double area() const;
    
private:
 
};
 