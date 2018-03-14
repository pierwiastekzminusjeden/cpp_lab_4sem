#include <iostream>
#include "Car.h"

Car::Car(int id, int passengers): Vehicle(id){
    m_passengers = passengers;
}

Car::~Car(){
    delete [] m_idPassengers;
}

void Car::SetPrice(int price){
    Product::SetPrice(price);
    std::cout << "The car price will be: " << Price() << std::endl;
}

void Car::SetMaxSpeed(int maxSpeed){
    m_maxSpeed = maxSpeed;
}

void Car::SetPassengersIds(const int  *numberOfPassengers, size_t size ){
    m_idPassengers = new int [size];
    for(int i = 0; i < static_cast<int>(size) ; i++)
        m_idPassengers[i] = numberOfPassengers[i];
}
    
void Car::Drive() const{
    std::cout << "Driving the car with ID=" << Id() << std::endl;

}

void Car::Print() const{
   std::cout << "Car with ID=" << Id() << " has "<< m_passengers << " passengers with following IDs: " ;
   for(int i = 0; i < m_passengers; i++)
       std::cout << m_idPassengers[i] << ", ";
   
   std::cout<<"Max speed of the car is " << m_maxSpeed << std::endl;
}

void Car::Move() const{
    Drive();
}

