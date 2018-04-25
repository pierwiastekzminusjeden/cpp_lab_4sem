#pragma once
int ReturnValueID;

#include <iostream>
#include <cstdlib>
#include "MyClass.h"
#include "MyException.h"

// extern int ReturnValueID;

void MyTerminate(){
    std::cout<<"--- UWAGA: blad mechanizmu wyjatkow ---"<<std::endl;
    exit(1);
}


void Fold3(const MyClass *third){
    MyClass last(*third);
    std::cout << "Entering fold level 3"<<std::endl;
    last.setType("F3");

    try{
        switch(ReturnValueID){
            case(0): throw 9.242f;  
            case(1): throw -87;  
            case(2): throw 16u;  
            case(3): throw 3.14157;  
        }
    }
    catch(unsigned uLiczba){
        std::cout << "Caught an exception of type: unsigned" <<std::endl;
    }
    catch (int nLiczba){
        std::cout << "Caught an exception of type: int" <<std::endl;
    }
    catch (float fLiczba){
        std::cout << "Caught an exception of type: float" <<std::endl;
    }
    catch (double fLiczba){
        std::cout << "Caught an exception of type: double" <<std::endl;
    }
    MyException except;
    throw except;

}


void Fold2(const MyClass *second){
    MyClass third(*second);
    std::cout << "Entering fold level 2"<<std::endl;
    third.setType("F2");
    Fold3(&third);
}

//pierwszy poziom zagniezdzenia
void Fold1(const MyClass *first){
    std::set_terminate(MyTerminate);

    MyClass second(*first);
    second.setType("F1");
    std::cout << "Entering fold level 1"<<std::endl;
    Fold2(&second);
}
