#pragma once
#include "Product.h"

//klasa bazowa reprezentujca oglnie pojazd. Dziedzicz po niej klasy Airplane oraz Car
class Vehicle: public Product{

public:
    Vehicle(const unsigned int id);

    virtual ~Vehicle();

    virtual void SetPrice(int price);

    virtual void SetMaxSpeed(int maxSpeed);

    virtual void Print() const;

    virtual void Move() const;
    
protected:
    int m_maxSpeed;
 
};
