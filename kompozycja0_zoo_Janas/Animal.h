#pragma once
#include <iostream>
#include <string>


//klasa bazowa dla zwierzat, zawiera podstawowe parametry zwierzat
class Animal{

public:
//konstruktor, pobiera wiek oraz imie
    Animal(int number,const std::string name);
//wirtualny destruktor
    virtual ~Animal();
//metoda wirtualna zwracajaca gos zwierzecia
    virtual void saySomething() const;

	virtual void print() const;
protected:
//imie zwierzecia
    std::string m_name;
//gos zwierzecia
    std::string m_voice;
//wiek zwierzecia
    int m_age;
 
};

