#pragma once
#include <iostream>

class Obserwator{
public:

    virtual void obserwuj(const int data) = 0;

    virtual ~Obserwator(){};
};


class ObserwatorLicznik:public Obserwator{
public:
    ObserwatorLicznik(): m_suma(0){};
   
    virtual void obserwuj(const int data){
            m_suma+= data;
    }

    int suma() const { return m_suma;}

private:
  int m_suma;
};



class ObserwatorWypisywacz:public Obserwator{
public:
    virtual void obserwuj(const int data){
            std::cout <<" "<< data;
    }
};
