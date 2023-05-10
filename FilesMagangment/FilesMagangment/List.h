//
// Created by diego on 3/5/2023.
//

#ifndef FILESMAGANGMENT_LIST_H
#define FILESMAGANGMENT_LIST_H

#include <iostream>
#include "Node.cpp"

template <class T>
class List {

private:
    Node<T> *root;
    int size;
public:
    List();
    void insert(T*);
    std::string toString();
    bool empty();
    void clear();
    virtual ~List();
    Node<T> * getRoot();


};



#endif //FILESMAGANGMENT_LIST_H
