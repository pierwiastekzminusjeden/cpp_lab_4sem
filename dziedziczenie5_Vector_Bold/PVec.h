#pragma once
#include <iostream>
#include <string>

class Wrapper;

//Vector Wraperów
class PVec{   
    friend std::ostream & operator<<(std::ostream & strm,const PVec & vec);

public:
    PVec();
    ~PVec();
    PVec &push_back(Wrapper *obj);
    void operator<<(Wrapper *obj);
    Wrapper & operator[](int index) const;

private:
    Wrapper *m_tab[10];
    int m_counter;
};


//Klasa bazowa
class Wrapper{
public:
    virtual void print(std::ostream & strm) const = 0;
    virtual ~Wrapper(){};
};

class IntWrapper: public Wrapper{
public:
  IntWrapper(int value) : m_value(value){};
  virtual void print(std::ostream &strm) const;

private:
    int m_value;
};

class FloatWrapper : public Wrapper
{
  public:
    FloatWrapper(float value): m_value(value){};
    virtual void print(std::ostream &strm) const;

  private:
    float m_value;
};

class StringWrapper : public Wrapper
{
  public:
    StringWrapper(std::string value) : m_value(value){};
    virtual void print(std::ostream & strm) const;

  private:
    std::string m_value;
};
