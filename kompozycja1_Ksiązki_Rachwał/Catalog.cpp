#include <iostream>
#include "Catalog.h"

Catalog::Catalog(const std::string name){

    for(int i = 0; i < 10; i++){
        m_books[i] = new Book();
    }

}
Catalog::~Catalog(){
    for(int i = 0; i < 10; i++){
        m_books[i]->~Book();
    }
}


void Catalog::AddBook(Book * toAdd){
    
}

void Catalog::Print(){
    
}   
