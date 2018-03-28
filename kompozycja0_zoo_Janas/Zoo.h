#pragma once
#include "Animal.h"

//Klasa zarzadzajaca wybiegami dla zwierzat. 
class Zoo{

public:
//konstruktor obiektu zoo, pobiera nazwe zoo/miejscowosc oraz liczbe wybiegow
    Zoo(const std::string name, int numberOfEnc);
//destruktor
    ~Zoo();
//Metoda wypisujaca liste zwierzat na danych wybiegach
    void print() const;
//Dodanie nowego zwierzecia na dany wybieg (pos)
    Animal *& insert(int pos, Animal * animal);
//dodanie nowego zwierzat do zoo na wszystkie wolne wybiegi
    Animal *& insert(Animal * animal);
//Zmniejszenie ilosci wybiegow do takiej jaka jest niezbedna. Kasuje puste wybiegi
    void reorganize(int pos) const;
//Zwraca ilosc zwierzat w zoo
    int numOfAnimals() const;
//Usuwa wybieg nie usuwajac zwierzecia
    Animal *& remove(int index);
private:
//Tablica wybiegow dla zwierzat
    Animal *m_enclosure[20]; //braklo czasu na dynamiczne
//nazwa zoo
    std::string m_name;
//liczba wybiegow
    int m_numberOfEnc;
//liczba zwierzat w zoo
    int m_numberOfAnimals;
 
};
