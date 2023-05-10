//
// Created by diego on 3/5/2023.
//

#ifndef FILESMAGANGMENT_NODE_H
#define FILESMAGANGMENT_NODE_H
#include <iostream>


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



#endif //FILESMAGANGMENT_NODE_H
