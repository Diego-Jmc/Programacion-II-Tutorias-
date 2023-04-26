//
// Created by diego on 26/4/2023.
//

#include "ApplePhone.h"


#include "ApplePhone.h"

ApplePhone::ApplePhone() {
    this->branch = "Apple";
    this->price = 1600;
}

std::string ApplePhone::getBranch() {
    return this->branch;
}

std::string ApplePhone::getPrice() {
    return std::to_string(this->price);
}
