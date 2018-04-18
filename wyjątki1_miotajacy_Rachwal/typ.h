#pragma once
#include <iostream>

//metody stream wyłącznie dla praktyki- są zbędne, da się krócej 

class typ{
public:     
    friend std::ostream & operator<<(std::ostream & strm, const typ & wyjatek);
    virtual void PrzedstawSie() const = 0;
    virtual void stream(std::ostream & strm) const = 0;
    virtual int typeNum() const = 0;
    virtual ~typ(){};
};


class typ1: public typ{
public:
    virtual void PrzedstawSie() const;
    virtual void stream(std::ostream & strm) const;
    virtual int typeNum() const;

};



class typ3: public typ{
public:
    virtual void PrzedstawSie() const;
    virtual void stream(std::ostream & strm) const;
    virtual int typeNum() const;


};


class typ4: public typ{
public:
    virtual void PrzedstawSie() const;
    virtual void stream(std::ostream & strm) const;
    virtual int typeNum() const;

};

class typ2: public typ4{
public:
    virtual void PrzedstawSie() const;
    virtual void stream(std::ostream & strm) const;
    virtual int typeNum() const;

};