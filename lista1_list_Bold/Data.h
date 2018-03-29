#pragma once
#include <iostream>
#include<string>


class Data{

public:
    // Data();

    virtual void print() const = 0;

    virtual ~Data(){

    };

private:
    int m_data;
};

class IntData: public Data{

public:
    IntData(const int x): m_data(x){};

    int get() const {return m_data;}
    
    virtual void print() const{
        std::cout << m_data << " ";
    }

private:
    int m_data;
};

class FloatData: public Data{

public:
    FloatData(const float x): m_data(x){};

    float get() const {return m_data;}
    
    virtual void print() const{
        std::cout << m_data << " ";
    }

private:
    float m_data;
};

class StringData: public Data{

public:
    StringData(const std::string x): m_data(x){};

    std::string get() const {return m_data;}
    
    virtual void print() const{
        std::cout << m_data << " ";
    }

private:
    std::string m_data;
};