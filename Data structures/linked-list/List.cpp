//
// Created by diego on 16/3/2023.
//

#include "List.h"

template<class T>
List<T>::List() {
    root = nullptr;
    size = 0;
}

template<class T>
bool List<T>::empty() {
    return this->size == 0;
}


template<class T>
void List<T>::insert(T *data) {
    Node<T> *newNode = new Node<T>(data,nullptr);

    // first we check if the root is emtpy , if so then we point it to the first node
    if(root == nullptr){
        root = newNode;
    }else{
        // else we iterate till the final of the list, and then we set the next value to the new node
        Node<T> *temp = root;
        while(temp->getNext()){
            temp = temp->getNext();
        }
        temp->setNext(newNode);
    }

    size++;
}

template<class T>
std::string List<T>::toString() {
    std::stringstream s;
    Node<T> *temp = root;

    while(temp){
        // note that the template value used must have a toString method defined and implemented
        s<<temp->getData()->toString()<<std::endl;
        temp = temp->getNext();
    }

    return s.str();
}

template<class T>
List<T>::~List() {

    Node<T> *temp1 = root;
    Node<T> *temp2;

    while(temp1 != nullptr){
        temp2 = temp1;
        temp1 = temp1->getNext();
        delete temp2;
    }
}

template<class T>
void List<T>::clear() {

    Node<T> *temp1 = root;
    Node<T> *temp2;

    // we are going to use deletion logic to achieve this method
    while(temp1 != nullptr){
        temp2 = temp1;
        temp1 = temp1->getNext();
        delete temp2;
    }

    root = nullptr;
}