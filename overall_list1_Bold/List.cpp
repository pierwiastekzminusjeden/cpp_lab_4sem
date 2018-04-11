#include <iostream>
#include "List.h"

List::List(){
    root = NULL;
}

List::List(const List & toCopy){
    Node * copyListPtr = toCopy.root;
    Node *newListPtr;
    Node * newListPrevPtr;

//jeśli niepusta
    if(copyListPtr){
        root = new Node(*copyListPtr->m_data);
        copyListPtr = copyListPtr->next;
        newListPrevPtr = root;   //po co?

    }

    while(copyListPtr){
        newListPtr = new Node(*copyListPtr->m_data);
        newListPrevPtr->next = newListPtr;
        newListPrevP
    }

}

List::~List(){
 if(root)
    delete root;
}
