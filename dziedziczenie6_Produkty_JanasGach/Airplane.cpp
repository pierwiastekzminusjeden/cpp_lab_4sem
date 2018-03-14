#include <iostream>
#include "Airplane.h"

Airplane::Airplane(int id): Vehicle(id){
    m_wingSpan = 100;
    m_maxSpeed = 100;
}

Airplane::~Airplane(){

}

void Airplane::SetWingspan(int wingSpan){
    m_wingSpan = wingSpan;
}

void Airplane::SetMaxSpeed(int maxSpeed){
    m_maxSpeed = maxSpeed;
}    

void Airplane::Fly() const{
    std::cout << "Flying the airplane with ID=" << Id() << std::endl;
}

void Airplane::Print() const{
    std::cout << "A vegicle with ID=" << Id() << " is an airplane with max speed of " << m_maxSpeed << " and wignspan " << m_wingSpan << std::endl;
}

void Airplane::SetPrice(int price){
    std::cout << "The plane price is changed" << std::endl;
    Product::SetPrice(price);
}

void Airplane::Move() const{
    Fly();
}