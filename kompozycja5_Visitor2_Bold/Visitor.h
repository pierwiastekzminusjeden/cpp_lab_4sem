#pragma once
#include "ElData.h"

//WAŻNE W CIUL. BEZ TEGO NIE WIEM CZEMU NIE DZIAŁA
class IntData;
class FloatData;

class Visitor{
public:
    virtual void visit(IntData *obj) = 0;
   
    virtual void visit(FloatData *obj) = 0;
};
