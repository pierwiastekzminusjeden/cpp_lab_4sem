#pragma once
#include "Data.h"
#include <vector>

class Node;

class List{

public: 
    enum Pos{
        Begin,
        End
    };

    List();

    List(const List & toCopy);

    List & insert(const Data &data);

    void insert(const Data &data, Pos pos);
    
    void print();;

    ~List();
private:
    Node * root;
};



class Node{

friend class List;

public:

    Node(const Data &toAdd);

    ~Node();
private:

    Data *m_data;

    Node *next;
};