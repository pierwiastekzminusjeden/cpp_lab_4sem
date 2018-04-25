#pragma once

class MyClass{

public:
    MyClass(const std::string &type): m_type(type){
        std::cout << "Created MyClass: " << m_type << std::endl;
    }

    MyClass(const MyClass & toCopy){
        std::cout << "Copy created MyClass: " << toCopy.m_type << std::endl;

        m_type = toCopy.m_type;
    }

    ~MyClass(){
        std::cout << "Destroyed MyClass: " << m_type << std::endl;
    }

    std::string getType() const{
        return m_type;
    }

    void setType(const std::string &type){
        m_type = type;
    }

private:
    std::string m_type;

};
