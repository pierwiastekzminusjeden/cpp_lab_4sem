#pragma once
#include "Product.h"

class Furniture:public Product{

public:
    Furniture(int id);

    ~Furniture();

    void SetPrice(int price);
    
    void Sit() const;

    virtual void Print() const;
 
};
