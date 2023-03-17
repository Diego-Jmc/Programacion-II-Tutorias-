//
// Created by diego on 16/3/2023.
//

#ifndef LINKED_LIST_CAR_H
#define LINKED_LIST_CAR_H
#include <iostream>
#include <sstream>

class Car {
public:
    Car(std::string make, std::string model, int year);
    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    void setMake(std::string make);
    void setModel(std::string model);
    void setYear(int year);
    std::string toString();

private:
    std::string make_;
    std::string model_;
    int year_;
};


#endif //LINKED_LIST_CAR_H
