#include <iostream>
#include <vector>



int main(){

    std::vector < int > dane;
    dane.push_back( 5 );
    dane.push_back( 2 );
    dane.push_back( 3 );
    dane.push_back( 1 );

    for(int i = 0 ; i < dane.size(); i++)
        std::cout << dane[i] << " ";
    std::cout << std::endl;

    dane.insert(dane.begin() , int(5));

     for(int i = 0 ; i < dane.size(); i++)
        std::cout << dane[i] << " ";
    std::cout << std::endl;


}