//
// Created by diego on 31/5/2023.
//

#include "ListIterator.h"

template<class T>
ListIterator<T>::ListIterator(Node<T> *root) {
    this->root = root;
    current = root;
}


template<class T>
bool ListIterator<T>::hasNext() {
    return current;
}

template<class T>
Node<T> * ListIterator<T>::getNext() {
         current = current->getNext();
         return current;

}

template<class T>
Node<T> * ListIterator<T>::getCurrent() {
    return current;
}

template<class T>
void ListIterator<T>::reset() {
    current = root;
}


