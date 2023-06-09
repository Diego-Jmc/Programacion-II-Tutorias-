//
// Created by diego on 16/3/2023.
//

#ifndef LINKED_LIST_LIST_H
#define LINKED_LIST_LIST_H
#include "Node.cpp"
#include <sstream>
#include "Client.h"
#include "ListIterator.cpp"

template <class K>
class ListIterator;

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
    std::string printClientsBalance();
    ListIterator<T> * getIterator();

    virtual ~List();

    Node<T> *getRoot() const;

};


#endif //LINKED_LIST_LIST_H
