//
// Created by diego on 19/4/2023.
//

#include "VectorIterator.h"

template<class T>
VectorIterator<T>::VectorIterator(T **vector, int size):vector(vector), size(size) {
    currentPos = 0;
}

template<class T>
bool VectorIterator<T>::hasNext() {

    if(currentPos < size-1)
        return true;

    return false;
}

template<class T>
T *VectorIterator<T>::getNext() {
    if(hasNext()){
        currentPos++;
        return vector[currentPos];
    }
    return nullptr;
}

template<class T>
void VectorIterator<T>::reset() {
    currentPos = 0;
}







