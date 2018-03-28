#pragma once
#include <iostream>
#include "Visitor.h"


class PrintingVisitor: public Visitor{
public:
    virtual void visit(IntData *obj){
       std::cout <<" " << obj->get();
    }

    virtual void visit(FloatData *obj){
        std::cout <<" " << obj->getFloat();
    }
};
