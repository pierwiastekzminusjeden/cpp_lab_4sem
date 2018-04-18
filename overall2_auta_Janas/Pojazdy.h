// Gabriela Miedlar , Krystian Molenda

#pragma once
#include <iostream>
#include <string>




//klasa zawierajca sie w obiektach klasy Samochod oraz motorowka. Przechowuje maksymalna predkosc pojazdu samochodu lub motorowki.
class PredkoscMaksymalna{
public:
//Zaprzyjazniona funkcja przeladowania operatora strumienia. Dos strumienia zapisujemy maksymalna predkosc pojazdu posiadajacego predkosc maksymalna
    friend std::ostream & operator<<(std::ostream &strm,const PredkoscMaksymalna &predkosc);
//Konstruktor. Pobiera predkosc maksymalna.
    PredkoscMaksymalna(int predkosc);
//destruktor
    ~PredkoscMaksymalna();
private:
//Pole przechowujace maksymalna predkosc wprowadzana w konstruktorze.
    int m_predkosc;
};




//Klasa czysto abstrakcyjna - bazowa - wszystkich innych pojazdow. 
class Pojazd{
public:
//Funkcja czysto wirtualna. Pozwala na wypisanie rodzaju w klasach pochodnych.
    virtual std::string rodzaj() const = 0;
//Destruktor wirtualny.
    virtual ~Pojazd(){}
};

//Klasa czysto abstrakcyjna - bazowa dla wszystkich pojazdow ladowych. Dziedziczy po klasie abstrakcyjnej Pojazd.
class PojazdLadowy: public virtual Pojazd{
public:
//Funkcja czysto wirtualna. Pozwala na wypisanie rodzaju w klasach pochodnych.
    virtual std::string rodzaj() const = 0;
//Destruktor wirtualny.
    virtual ~PojazdLadowy(){}
};




//Klasa reprezentujaca samochod. Dziedziczy wirtualnie po klasie Pojazd Ladowy. Posiada predkosc masymalna.
class Samochod: public virtual PojazdLadowy{
public:
//Konstruktor - pobiera obiekt klasy PredkoscMaksymalna.
    Samochod(PredkoscMaksymalna predkosc);
//wirtualna metoda, wypisuje rodzaj pojazdu - samochod.
    virtual std::string rodzaj() const;
//Zwraca obiekt klasy PredkoscMaksymalna danego samochodu. 
    const PredkoscMaksymalna & predkoscMaksymalna() const;
//Wrtualny dekstruktor
    virtual ~Samochod();  
protected:
//Obiekt klasy PredkoscMaksymalna reprezentujacy predkosc maksymalna samochodu
    PredkoscMaksymalna m_predkosc;
};



//Klasa reprezentujaca motorowka. Dziedziczy wirtualnie po klasie Pojazd. Posiada predkosc masymalna.
class Motorowka: public virtual Pojazd{
public:
//Konstruktor - pobiera obiekt klasy PredkoscMaksymalna.
    Motorowka(PredkoscMaksymalna predkosc);
//wirtualna metoda, wypisuje rodzaj pojazdu - motorowka.
    virtual std::string rodzaj() const;
//Zwraca obiekt klasy PredkoscMaksymalna danej motorowki. 
    const PredkoscMaksymalna & predkoscMaksymalna() const;    
//Wrtualny dekstruktor
    virtual ~Motorowka();
protected:
//Obiekt klasy PredkoscMaksymalna reprezentujacy predkosc maksymalna motorowki
    PredkoscMaksymalna m_predkosc;
};




//Klasa reprezentujaca Rower. Dziedziczy wirtualnie po klasie PojazdLadowy.
class Rower: public virtual PojazdLadowy{
public:
//Konstruktor
    Rower();
//wirtualna metoda, wypisuje rodzaj pojazdu - rower.
    virtual std::string rodzaj() const;
//wirtualny destruktor
    virtual ~Rower();
};



//Klasa reprezentujaca amfibie. Dziedziczy po klasach samochod oraz motorowka.
class Amfibia: public Samochod, public Motorowka{
public:
//Pobiera dwie predkosci maksymalne - ladowa oraz wodna. Wywoluje kostruktory klas bazowych. 
    Amfibia(PredkoscMaksymalna ladowa, PredkoscMaksymalna wodna);
//wirtualna metoda, wypisuje rodzaj pojazdu - rower.
    virtual std::string rodzaj() const;
//destruktor
    ~Amfibia();
};
