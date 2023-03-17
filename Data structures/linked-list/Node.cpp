//
// Created by diego on 16/3/2023.
//

#include "Node.h"



template<class T>
Node<T>::Node(T *data, Node<T> *next) : data(data), next(next) {}

template<class T>
Node<T>::~Node() {

    delete data;
}

template<class T>
T *Node<T>::getData() const {
    return data;
}

template<class T>
void Node<T>::setData(T *data) {
    Node::data = data;
}

template<class T>
Node<T> *Node<T>::getNext() const {
    return next;
}

template<class T>
void Node<T>::setNext(Node<T> *next) {
    Node::next = next;
}
