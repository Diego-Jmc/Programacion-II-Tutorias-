//
// Created by diego on 19/4/2023.
//

#ifndef ITERATOR_VECTORITERATOR_H
#define ITERATOR_VECTORITERATOR_H
#include "Iterator.h"




template<class T>
class VectorIterator :public Iterator<T>{
private:
    T ** vector;
    int currentPos;
    int size;

public:

    explicit VectorIterator(T **reference);

    VectorIterator(T **vector, int size);


    bool hasNext() override;

    T *getNext() override;

    void reset() override;

};


#endif //ITERATOR_VECTORITERATOR_H
