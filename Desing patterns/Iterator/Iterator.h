//
// Created by diego on 19/4/2023.
//

#ifndef ITERATOR_ITERATOR_H
#define ITERATOR_ITERATOR_H
#include <iostream>

template<class T>
class Iterator {

public:
    virtual bool hasNext() = 0;
    virtual T* getNext() = 0;
    virtual void reset() = 0;

};


#endif //ITERATOR_ITERATOR_H
