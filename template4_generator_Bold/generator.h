#pragma once


template<typename T> 
class generator{

public:

    //konstruktor    
    generator(T value, T (*fun)(T));

    //przeciazony operator inkrementacji
    void operator++();

    //metoda zwracajaca aktualna wartosc
    T current();

    //funkcja resetujaca
    void reset(T value, T (*fun)(T));

    void reset();

    bool operator>(T obj);

    bool operator<(T obj);

    T next();


private:
    T m_value;
    T (*m_fun)(T);
    T m_fValue;
};


template<typename T> 
generator<T>::generator(T value, T (*fun)(T)){
    m_fun = fun;
    m_value = value;
    m_fValue = value;
}

template<typename T> 
void generator<T>::operator++(){
    m_value = m_fun(m_value);
}


template<typename T> 
T generator<T>::current(){
    return m_value;
}

template<typename T> 
void generator<T>::reset(T value, T (*fun)(T)){
    m_fValue = T(value);
    m_value = T(value);
    m_fun = fun;
    
}


template<typename T> 
void generator<T>::reset(){
    m_value = m_fValue;   
}


template<typename T> 
bool generator<T>::operator>(T obj){
    return (m_value > obj);
}

template<typename T> 
bool generator<T>::operator<(T obj){
    return (m_value < obj);
}

template<typename T> 
T generator<T>::next(){
    ++(*this);
    return m_value;
}