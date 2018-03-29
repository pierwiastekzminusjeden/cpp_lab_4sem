#pragma once
#include "Data.h"
#include <vector>

class List{

public: 
    enum Pos{
        Begin,
        End
    };

    void print(){
        for(unsigned int i = 0; i < m_list.size();i++)
            // dynamic_cast<Data &>(m_list[i]).print();
            m_list[i].print();

    }

    List & insert(const Data &data){
        // m_list.push_back(const_cast<Data&>(data));
        m_list.push_back(data);
        return *this;
    }

    void insert(const Data &data, Pos pos){
        
        if(pos == Begin)
            m_list.insert(m_list.begin(), data);
        else if(pos == End)
            m_list.push_back(data);

    }
   
private:
    std::vector<Data> m_list;
};
