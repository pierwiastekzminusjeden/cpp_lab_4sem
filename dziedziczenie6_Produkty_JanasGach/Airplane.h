#pragma once
#include "Vehicle.h"

class Airplane:public Vehicle{

public:
    Airplane(int id);

    ~Airplane();

    void SetWingspan(int wingSpan);

    virtual void SetMaxSpeed(int maxSpeed);    

    void Fly() const;

    virtual void Print() const;

    virtual void SetPrice(int price);

    virtual void Move() const;
private:
    int m_wingSpan;

};
