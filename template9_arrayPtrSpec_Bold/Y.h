#pragma once
#include "X.h"

class Y: public X{

public:
    Y(const std::string & str): X(str){}

    ~Y(){std::cout << "deleting Y " << m_str << std::endl; }
 
};
