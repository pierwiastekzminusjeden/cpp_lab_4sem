#pragma once
#include <vector>

//klasa Factory, bedaca fabryka obiektow dowolnego typu. 
class Factory{

public:

//funkcja szablonowa ustawiajaca zapisujacy obiekt przyjetego typu. Mozliwy jest do //przechowania tylko jeden obiekt danego typu w danej fabryce
    template<typename T> T base(T obj, bool print = false){
        static T m_value;
        if(print == false)
            m_value = obj;
        return m_value;
    }

//Funkcja szablonowa zwracajaca przechowywany obiekt danego typu w danej fabryce.
    template<typename T> T product(){
        T m_value = T();
        return base<T>(m_value, true);
    }
};
