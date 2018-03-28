#pragma once
#include <iostream>
#include <vector>
#include "Obserwator.h"

class Obserwowany {
public:
    virtual void noweDaneNadeszly(const int data){
        for(unsigned int i = 0; i < m_obserwatorzy.size(); i++){
            m_obserwatorzy[i]->obserwuj(data);
        }
    };
    void dodajObserwatora(Obserwator *obsr){
        m_obserwatorzy.push_back(obsr);        
    }

private: 
    std::vector<Obserwator *> m_obserwatorzy;

};

