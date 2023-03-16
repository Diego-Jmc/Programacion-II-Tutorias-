//
// Created by diego on 16/3/2023.
//

#ifndef PROTOTYPE_SHAPE_H
#define PROTOTYPE_SHAPE_H
#include <iostream>


class Shape {

protected:
    float area;
public:
    virtual float getArea() const = 0;

};


#endif //PROTOTYPE_SHAPE_H
