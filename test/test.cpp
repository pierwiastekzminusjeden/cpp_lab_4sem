#include <iostream>
#include <string>

template<typename T>
class klasa{

public:
    klasa(T a): zmienna(a){} 
    template<typename P> void print(P a){ std::cout << "dupa" << a << " " << zmienna ;}

    T zmienna;
};


int main(){
    klasa<std::string> a("dupa");
    a.print("dupa");


    return 0;
}

