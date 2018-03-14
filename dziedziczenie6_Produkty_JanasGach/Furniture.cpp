#include <iostream>
#include "Furniture.h"

Furniture::Furniture(int id): Product(id){
}

Furniture::~Furniture(){
}

void Furniture::SetPrice(int price){
    Product::SetPrice(price);
}
    
void Furniture::Sit() const{
    std::cout << "You sit down on a chair. Nothing happens." << std::endl;
}

void Furniture::Print() const{
    std::cout << "Product with ID=" << Id() << " costs " << Price() <<std::endl;
}
