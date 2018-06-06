#pragma once
#include <iostream>
#include <stdexcept>



template<int size, typename T>
class Array{

public:

    friend std::ostream & operator<<(std::ostream &strm, Array<size, T> & arr){
        for(int i = 0; i < size; i++)
            strm << arr[i] << " ";
        return strm;
    }


    Array(){
        arr = new T[size];
    }


    ~Array(){
        delete [] arr;
    }

    
    T & operator[](int index){
        if(index >= size){
            throw std::invalid_argument("index poza zakresem");
           
        }
        return arr[index];
    }

private:
    T *arr;
};


template<int size, typename T>
class Array<size, T *>{

public:
    friend std::ostream & operator<<(std::ostream &strm, Array<size, T*> & arr){
        for(int i = 0; i < size; i++)
            strm << arr[i] << " ";
        return strm;
    }

    Array(){
        arr = new T* [size];
    }


    ~Array(){
        for(int i = 0; i < size; i++)
            delete arr[i];
        delete [] arr;
    }

    
    T *& operator[](int index){
       if(index >= size){
            throw std::invalid_argument("index poza zakresem");
          
        }
        return arr[index];
    }
    


private:
    T **arr;


};
