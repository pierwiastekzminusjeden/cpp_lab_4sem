#pragma once
#include <iostream>
#include<string>

class Data{

public:
    // Data();

    virtual ~Data(){

    };


private:
 
};


class IntData: public Data{

public:
    IntData(const int x): m_data(x){};

 

private:
    int m_data;
};

class FloatData: public Data{

public:
    FloatData(const float x): m_data(x){};

  

private:
    float m_data;
};

class StringData: public Data{

public:
    StringData(const std::string x): m_data(x){};

private:
    std::string m_data;
};