#pragma once
//Zadanie posiada przyklad uzycia dynamic_casta. Wazne




// klasa reprezentujaca rozdzielczosc - skladowa Drukarki oraz skanera
class Rozdzielczosc{
public: 
    Rozdzielczosc(int x, int y): m_x(x), m_y(y){};
    
    friend std::ostream & operator<< (std::ostream &strm, const Rozdzielczosc & rozd);
protected:
    int m_x;
    int m_y;
};

std::ostream & operator<< (std::ostream &strm, const Rozdzielczosc & rozd){
     strm << rozd.m_x << "x" << rozd.m_y;
     return strm;
 }

//Klasa abstrakcyjna reprezentujaca ogol urzadzen biurowych. Dziedzicza po niej posrednio lub bezposrednio 
//wszystkie urzadzenia
class Urzadzenie{
public:
    virtual std::string rodzaj() const = 0;
    
    virtual ~Urzadzenie(){}
};

//Pochodna klasy urzadzenie. Reprezentuje urzadzenia wymagajace papieru
class Papierozerne: public virtual Urzadzenie{
public:
    virtual std::string rodzaj() const{ return "Papierozerne";}

    virtual ~Papierozerne(){}
};

//Klasa pochodna po klasie Papierozerne. Reprezentuje ksero
class Ksero: public virtual Papierozerne{
public:
    virtual std::string rodzaj() const{ return "Ksero";}

    virtual ~Ksero(){}
};

//Klasa pochodna po klasie Papierozerne. Reprezentuje ksero. Posiada składową rozdzielczosc. 
class Drukarka: public virtual Papierozerne{

public:
    Drukarka(Rozdzielczosc rozdzielczosc): m_rozdzielczosc(rozdzielczosc){}

    virtual std::string rodzaj() const{ return "Drukarka";}
    
    virtual const Rozdzielczosc & rozdzielczosc() const {return m_rozdzielczosc;}

    virtual ~Drukarka(){}
protected: 
    Rozdzielczosc m_rozdzielczosc;
};

// Klasa reprezentujaca skaner. Dziedziczy bezposrednio po urzadzeniu. Posiada składową rozdzielczosc
class Skaner: public virtual Urzadzenie{
public:
    Skaner(Rozdzielczosc rozdzielczosc): m_rozdzielczosc(rozdzielczosc){}
    
    virtual std::string rodzaj() const{ return "Skaner";}
    
    virtual const Rozdzielczosc & rozdzielczosc() const {return m_rozdzielczosc;}

    virtual ~Skaner(){}
protected: 
    Rozdzielczosc m_rozdzielczosc;
};

//Złożenie wszystkich powyzszych urzadzen takich jak ksero, skaner i drukarka.
class Wielofunkcyjne: public Ksero, public Skaner, public Drukarka{
public:
    Wielofunkcyjne(Rozdzielczosc rozdzielczosc1, Rozdzielczosc rozdzielczosc2):Ksero(),Skaner(rozdzielczosc2), Drukarka(rozdzielczosc1){}

    virtual std::string rodzaj() const{ return "Wielofunkcyjne";}
}; 
