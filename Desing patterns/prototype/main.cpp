#include "Circle.h"

int main() {
    // First we create a circle
    Circle *myCircle = new Circle(1.2);
    std::cout << "Original circle area: " << myCircle->getArea() << "\n";

    // Let's make a clone of it using the prototype design pattern
    // We should cast the clone method if we want to maintain polymorphism
    Circle *newCircle = dynamic_cast<Circle *>(myCircle->clone());
    std::cout << "Cloned circle area: " << newCircle->getArea() << "\n";

    return 0;
}