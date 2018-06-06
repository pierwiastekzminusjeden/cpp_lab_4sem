#pragma once
#include <iostream>


//Klasa szablonowa reprezentujaca dynamiczna tablice dowolnych typow 
template<typename T>
class DynArray{

public:

    //Zaprzyjazniona funkcja przeciazajaca operator <<. Pozwala na wypisanie calej tablicy poprzez
    //strumien. 
    friend std::ostream & operator <<(std::ostream & strm , const DynArray<T> & arr ){
        strm << "{";
        for(int i = 0; i < arr.m_size; i++){
            strm << "\""<< arr.m_data[i] <<  "\"";
            if(i != arr.m_size - 1)
                strm << ",";
        }
        strm << "}";
        return strm;
    }

    //Konstruktor tablicy dynamicznej. Tworzy pusta tablice o zadanym rozmiarze, alokujac na nia pamiec.
    DynArray(int size);


    //Konstruktor tablicy dynamicznej. Tworzy tablice o zadanym rozmiarze kopiujac
    // do niej elementy z przekazanej tablicy tego samego typu. Alokujac na nia pamiec.
    DynArray(int size , const T* array);

    //Zwraca rozmiar tablicy
    int size();

    //Przeladowany operator []. Zwraca referencje do elementu pod przekazanym indeksem.
    T & operator[](int index);


    //Destruktor, zwalnia pamiec zaalokowana przez konstruktor.
    ~DynArray();

    //Zwraca adres poczatku tablicy
    T* begin();

    //Zwraca adres komorki pamieci za ostatnim elementem tablicy. (konca tablicy)
    T* end();
    
    //Podklasa klasy szablonowej DynArray. Pelni role iteratora. 
    class Iterator{
    public:
        
        //Konstruktor podklasy Iterator pobierajacy adres poczatku tablicy w klasie szablonowej
        //DynArray
        Iterator(T* begin);
        
        //Przeladowany operator nierownosci podklasy Iterator
        bool operator !=(const T* obj);

        //Przeladowany operator przypisania podklasy Iterator.
        Iterator & operator=(T* obj){
            if(m_data != obj)
                m_data = obj;
            return *this;
        }

        //Przeladowany operator inkrementacji
        void operator++();

        //Przeladowany operator wyluskania ( * ). Zwraca aktualny element przechowywany w iteratorze.
        T operator*();

        //Przeladowany operator -> . Pozwala na operacje bezposrednio na elementach tablicy.
        T* operator->();
        
    private:

        //Aktualny element przechowywany przez iterator
        T* m_data;
    };

private:

    //Przechowuje rozmiar tablicy
    int m_size;

    //Wskaznik na tablice danych o zadanym rozmiarze
    T* m_data;
};






////////////////////////////////////////////////////////////////////////
//Metody klasy szablonowej DynArray


template<typename T>
DynArray<T>::DynArray(int size): m_size(size){
    m_data = new T[size];
}

template<typename T>
DynArray<T>::DynArray(int size , const T* array):m_size(size){
    m_data = new T[size];
    
    for(int i = 0; i < size; i++){
        m_data[i] = array[i];
    }
}

template<typename T>
int DynArray<T>::size(){ 
    return m_size;
}


template<typename T>
T & DynArray<T>::operator[](int index){ 
    return m_data[index];
}

template<typename T>
DynArray<T>::~DynArray(){
    delete [] m_data;
    m_size = 0;
}

template<typename T>
T* DynArray<T>::begin(){ 
    return m_data;
} 

template<typename T>
T* DynArray<T>::end(){ 
    return &(m_data[m_size]);
}

////////////////////////////////////////////////////////////////////////
//Metody podklasy  Iterator klasy szablonowej dynarray

template<typename T>
DynArray<T>::Iterator::Iterator(T* begin):m_data(begin){

}

template<typename T>
bool DynArray<T>::Iterator::operator !=(const T* obj){
    if (m_data != obj)
        return true;
    return false;
}

template<typename T>
void DynArray<T>::Iterator::operator++(){
     ++m_data;
}


template<typename T>
T DynArray<T>::Iterator::operator*(){ 
    return *(m_data);
}

template<typename T>
T* DynArray<T>::Iterator::operator->(){
    return m_data;
}
