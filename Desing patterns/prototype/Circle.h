//
// Created by diego on 16/3/2023.
//

#ifndef PROTOTYPE_CIRCLE_H
#define PROTOTYPE_CIRCLE_H
#include "IPrototype.h"
#include "Shape.h"
#include <cmath>

// This class will implement 2 interfaces

class Circle : public IPrototype , Shape{

private:
    float radius;

public:
    Circle(Circle* );
    Circle(float radius);
    IPrototype * clone() override;
    float getArea() const override;
    float getRadius() const;
};

#endif //PROTOTYPE_CIRCLE_H
