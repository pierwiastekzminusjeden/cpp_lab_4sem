#include <iostream>
#include "Data.h"


bool IntData::isEqual(const Data & dataValue){
    const IntData * dptr = dynamic_cast<const IntData *> (&dataValue);

    if(dptr){
        if(dptr->m_data == m_data)
            return true;
    }
    return false;
}


bool FloatData::isEqual(const Data & dataValue){
    const FloatData * dptr = dynamic_cast<const FloatData *> (&dataValue);

    if(dptr){
        if(dptr->m_data == m_data)
            return true;
    }
    return false;
}


bool StringData::isEqual(const Data & dataValue){
     const StringData * dptr = dynamic_cast<const StringData *> (&dataValue);

    if(dptr){
        if(dptr->m_data == m_data)
            return true;
    }
    return false;
}