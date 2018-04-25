#pragma once

//klasa, ktorej obiekty reprezentuja poszczegolne wartosc wartosc
class Value{
public:
//konstruktor dwuargumentowy. Przyjmuje nazwe obiektu oraz wartosc jaka ma byc do niej przypisana.
//Konstruktor uzywany jest przez metode PreareValue klasy Factory
    Value(const std::string & name, double value);
//destruktor
    ~Value();
//Metoda wypisujaca podstawowe parametry wartosci
    void Print() const;

private:
//Nazwa obiektu przechowujacego wartosc
    std::string m_name;
//Wartosc przechowywana w obiekcie
    double m_value;
};
