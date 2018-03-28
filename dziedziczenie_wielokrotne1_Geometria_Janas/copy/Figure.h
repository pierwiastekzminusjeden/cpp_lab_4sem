#pragma once
#include "Transformable.h"
#include "Point.h"

class Figure:public Transformable{

public:
    Figure(int numOfPoints);

    ~Figure();

    void print() const;

    double length() const;

    void setPoint(double x, double y, double z);

    virtual void move(const double x, const double y);

    virtual void scale(const Point & p, const double scale);
    
	virtual void rotate(const Point & p, const double angle);
private:
    Point **m_points;
    int m_numOfPoints;
 
};
