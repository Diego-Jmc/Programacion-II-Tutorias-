
#include "Vector.h"

template<class T>
Vector<T>::Vector(int size):size(size) {
    this->length = 0;
    vector = new T *[size];

    for(int i=0;i<size;i++){
        vector[i] = nullptr;
    }

}

template<class T>
 void Vector<T>::push(T *data) {
    if(size > length){
        vector[length++] = data;
    }
}


template<class T>
T* Vector<T>::findById(std::string id) {
    for(int i=0;i<length;i++){
        if(vector[i]->getId() == id){
            return vector[i];
        }
    }

    return nullptr;
}


template<class T>
std::string Vector<T>::toString() {
    std::stringstream s;

    for(int i=0;i<length;i++){
        s<<vector[i]->toString()<<std::endl;
    }

    return s.str();
}

template<class T>
Vector<T>::~Vector() {
    for(int i=0;i<size;i++){
        delete vector[i];
    }

    delete []vector;

}

template<class T>
int Vector<T>::getLength() {
    return this->length;
}
template<class T>
int Vector<T>::getSize() {
    return this->size;
}
template<class T>
T* Vector<T>::getIndex(int index) {
    if(index >= 0 && index < size) {
        return vector[index];
    }
    else {
        throw std::out_of_range("Índice fuera de rango");
    }
}

template<class T>
Iterator<T> *Vector<T>::getIterator() {
    Iterator<T> *iterator = new VectorIterator<T>(vector,size);
    return iterator;
}