#pragma once
#include <iostream>


template<typename T>
class UniquePointer{

public:
    
    friend std::ostream & operator<<(std::ostream &strm, const UniquePointer<T> &pointer){
        return strm<<"[pointing to: <"<<pointer.m_adress << ">]";
    }
    
    UniquePointer(T * adress): m_adress(adress){}

    UniquePointer(const UniquePointer<T> & toCopy){}

    UniquePointer(UniquePointer<T> & toCopy){
        m_adress = toCopy.m_adress;
        toCopy.m_adress = 0;
        
    }
    
    const T & operator*() const{
        return *(m_adress);
    }

    operator T*(){
        return m_adress;
    }

    UniquePointer & operator=(UniquePointer & obj){
        if(*this != obj){
            delete m_adress;
            m_adress = obj.m_adress;
            obj.m_adress = 0;
        }
        return *this;
    }

    ~UniquePointer(){
        if(m_adress)
            delete m_adress;
    }

private:
    T * m_adress;
};
