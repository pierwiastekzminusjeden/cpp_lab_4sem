#pragma once
#include <iostream>
#include <string>

class Pomieszczenie{

public:
    Pomieszczenie(const std::string & nazwa){
        m_nazwa = nazwa;
    }

    ~Pomieszczenie(){}

    void zetrzyj_kurze() const{
		std::cout<<"scieram kurze w pomieszczeniu: "<< m_nazwa <<std::endl;
	}
	void umyj_podloge() const{
		std::cout<<"myje podloge w pomieszczeniu: "<< m_nazwa <<std::endl;
	}
	void odkurz() const{
		std::cout<<"odkurzam w pomieszczeniu: "<< m_nazwa <<std::endl;
    }

    template <typename T> void wstaw(const T obj) const{
        std::cout<<"wstawiam "<< obj <<" do pomieszczenia "<< m_nazwa << std::endl;
    }
private:
    std::string m_nazwa;
};
