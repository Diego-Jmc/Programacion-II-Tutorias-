//
// Created by diego on 16/3/2023.
//

#include "Car.h"

Car::Car(std::string make, std::string model, int year) : make_(make), model_(model), year_(year) {}

std::string Car::getMake() const {
    return make_;
}

std::string Car::getModel() const {
    return model_;
}

int Car::getYear() const {
    return year_;
}

void Car::setMake(std::string make) {
    make_ = make;
}

void Car::setModel(std::string model) {
    model_ = model;
}

void Car::setYear(int year) {
    year_ = year;
}

std::string Car::toString() {
    std::ostringstream out;
    out << year_ << " " << make_ << " " << model_;
    return out.str();

}