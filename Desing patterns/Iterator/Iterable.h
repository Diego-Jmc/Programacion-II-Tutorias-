//
// Created by diego on 19/4/2023.
//

#ifndef ITERATOR_ITERABLE_H
#define ITERATOR_ITERABLE_H
#include "Iterator.h"

template<class T>
class Iterable {

public:
    virtual Iterator<T> * getIterator() = 0;
};


#endif //ITERATOR_ITERABLE_H
