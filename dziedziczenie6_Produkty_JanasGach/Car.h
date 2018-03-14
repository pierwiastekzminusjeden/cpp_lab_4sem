#pragma once
#include "Vehicle.h"


class Car:public Vehicle{

public:
    Car(int id, int passengers);

    ~Car();

    virtual void SetPrice(int price);
    
    virtual void SetMaxSpeed(int maxSpeed);

    virtual void Print() const;

    void SetPassengersIds(const int  *numberOfPassengers, size_t size );
    
    virtual void Move() const;

    void Drive() const;

private:
    int m_passengers;
    int *m_idPassengers;
    
};
