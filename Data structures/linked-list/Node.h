//
// Created by diego on 16/3/2023.
//

#ifndef LINKED_LIST_NODE_H
#define LINKED_LIST_NODE_H
#include <iostream>
// First we must define a template , so we can re-use this class

template <class T>
class Node {
public:
    Node(T *data, Node<T> *next);

    T *getData() const;

    void setData(T *data);

    Node<T> *getNext() const;

    void setNext(Node<T> *next);

    virtual ~Node();

private:
    T * data;
    Node<T> *next;

};


#endif //LINKED_LIST_NODE_H
