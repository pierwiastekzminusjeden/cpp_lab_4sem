#pragma once
#include "Visitor.h"


class AccumulatingVisitor: public Visitor{
public:

    AccumulatingVisitor(): m_floatSum(0){};

    virtual void visit(IntData *obj){
        m_floatSum += static_cast<float>(obj->get());
    }

    virtual void visit(FloatData *obj){
         m_floatSum += obj->getFloat();
    }

    float getTotalSum() const{ return m_floatSum;}
private:
    float m_floatSum;
};

