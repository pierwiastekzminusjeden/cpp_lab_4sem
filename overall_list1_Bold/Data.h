#pragma once
#include <iostream>
#include<string>


class Data{

public:
    virtual void print() const = 0;

    virtual bool isEqual(const Data &dataValue) = 0;
    
    virtual Data * clone() const = 0;

    virtual ~Data(){};

};

class IntData: public Data{

public:
    IntData(const int x): m_data(x){};

    int get() const {return m_data;}
    
    virtual void print() const{ std::cout << m_data << " ";}

    virtual bool isEqual(const Data &dataValue);
    
    virtual Data * clone() const{return new IntData(m_data);}
    
    ~IntData(){std::cout<<"~IntData()"<<std::endl;};
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
    virtual bool isEqual(const Data &dataValue);

    virtual Data * clone() const{return new FloatData(m_data);}

    ~FloatData(){std::cout<<"~FloatData()"<<std::endl;};

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
    virtual bool isEqual(const Data &dataValue);

    virtual Data * clone() const{return new StringData(m_data);}

    ~StringData(){std::cout<<"~StringData()"<<std::endl;};
private:
    std::string m_data;
};