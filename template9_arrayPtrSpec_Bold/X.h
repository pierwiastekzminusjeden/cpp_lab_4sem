#pragma once
#include <iostream>
#include <string>

class X{

public:
    X(){};
    X(const std::string & str): m_str(str){}

    ~X(){std::cout << "deleting X " << m_str <<std::endl;}

    std::string get() const{ return m_str;}
    
    friend std::ostream & operator <<(std::ostream & strm, X & x){
        strm<< x.get();
        return strm;
    }


protected:
    std::string m_str;
};
