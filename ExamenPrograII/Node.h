//
// Created by diego on 10/5/2023.
//

#ifndef EXAMENPROGRAII_NODE_H
#define EXAMENPROGRAII_NODE_H
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
#endif //EXAMENPROGRAII_NODE_H
