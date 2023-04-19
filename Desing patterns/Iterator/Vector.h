//
// Created by diego on 19/4/2023.
//

#ifndef ITERATOR_VECTOR_H
#define ITERATOR_VECTOR_H
#include <iostream>
#include <sstream>
#include "Iterable.h"
#include "VectorIterator.cpp"

template <class T>
class Vector:public Iterable<T>{
public:
    Vector(int size);
    T * findById(std::string id);
    void push(T*);
    std::string toString();
    virtual ~Vector();
    int getLength();
    T * getIndex(int index);
    Iterator<T> * getIterator() override;
    int getSize();

private:

    T ** vector;

    int size;

    int length;

};


#endif //ITERATOR_VECTOR_H
