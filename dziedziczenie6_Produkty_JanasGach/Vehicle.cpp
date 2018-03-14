#include <iostream>
#include "Vehicle.h"


Vehicle::Vehicle(const unsigned int id): Product(id){
}

Vehicle::~Vehicle(){
}

void Vehicle::SetPrice(int price){
    Product::SetPrice(price);
    std::cout << Price() << " is the new cost of the vehicle" << std::endl;

}

void Vehicle::SetMaxSpeed(int maxSpeed){
    m_maxSpeed = maxSpeed;
    
}

void Vehicle::Print() const{
    std::cout << "This is a vehicle with max speed of " << m_maxSpeed << std::endl;
}

void Vehicle::Move() const{
    std::cout << "Moving with speed 200" << std::endl;
}