//
// Created by diego on 10/5/2023.
//

#ifndef EXAMENPROGRAII_LIST_H
#define EXAMENPROGRAII_LIST_H

#include "Node.cpp"
#include <sstream>

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

    Node<T> *getRoot() const;

    void setRoot(Node<T> *root);


};


#endif //EXAMENPROGRAII_LIST_H
