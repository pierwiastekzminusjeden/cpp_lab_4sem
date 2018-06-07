#pragma once


template<typename T>
class Vect{

public:
    Vect(int size): m_size(size){
        arr = new T [size];
    }

    ~Vect(){
        delete [] arr;
    }


    int size() const{ return m_size; }

    T &operator[](int index){
        return arr[index];
    }

private:
    int m_size;
    T *arr;
};
