#pragma once
#include <iostream>
#include <string>
class Area{

public:
    // friend std::ostream & operator<<(std::ostream & strm, Area & area);
    Area(){};

    ~Area(){};

    virtual double area() const = 0;
 
};
