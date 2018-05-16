#pragma once


// Klasa reprezentujaca punkt na plaszczyznie.

class Punkt{

public:

    // konstruktor pobierajacy wspolrzedne punktu
    Punkt(int x, int y): m_x(x), m_y(y){}

    // Zwraca wspolrzedna punktu, x lub y, zaleznie od argumentu szablonowego.
    template<int T> int wsp() const{
        return T == 0 ?  m_x : m_y;
    }

    // Zwraca minimum z dwoch porownywanych wartosci.
    template<typename T> static const T & min(const T & x, const T & y){
        return x < y ? x : y; 
    }

    // Zwraca maximum z dwoch porownywanych wartosci
    template<typename T> static const T & max(const T & x, const T & y){
        return x < y ? y : x; 
    }

    // Przeciazany operator porownania <. Porownuje obiekty klasy punkt.
    bool operator<(const Punkt &p) const{
        if(m_x < p.m_x){ 
            return true;
        }
        else if( m_x == m_y){
            if(m_y < p.m_y)
                return 1;    
        }
        return 0; 
    }
    
private:

    //wspolrzedna x
    int m_x;

    //wspolrzedna y
    int m_y;
};
