//
// Created by diego on 16/3/2023.
//

#include "Circle.h"

// we calculate the area using the circle area formula
float Circle::getArea() const {
    return M_PI* pow(getRadius(),2);
}

IPrototype *Circle::clone() {
    return new Circle(this);
}

float Circle::getRadius() const {
    return this->radius;
}

/*
  Every Prototype class must have a constructor that accepts an object
 of its own class, so we can clone it using the "this" pointer in the clone method

 */

Circle::Circle(Circle *c) {
    this->radius = c->getRadius();
}

Circle::Circle(float radius) {
    this->radius = radius;
}