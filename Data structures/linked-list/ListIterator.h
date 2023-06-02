//
// Created by diego on 31/5/2023.
//

#ifndef LINKED_LIST_LISTITERATOR_H
#define LINKED_LIST_LISTITERATOR_H

template <typename T>
class Node; // forward declaration ! to avoid circular references

template<class T>
class ListIterator {

private:
    Node<T> *root;
    Node<T> *current;
public:
    ListIterator(Node<T> *root);
    bool hasNext();
    Node<T> * getNext();
    Node<T> * getCurrent();
    void reset();
};


#endif //LINKED_LIST_LISTITERATOR_H
