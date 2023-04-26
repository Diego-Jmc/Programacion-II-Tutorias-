//
// Created by diego on 26/4/2023.
//

#include "SamsumgPhone.h"

SamsungPhone::SamsungPhone() {
    this->branch = "Samsung";
    this->price = 1200;
}

std::string SamsungPhone::getBranch() {
    return this->branch;
}

std::string SamsungPhone::getPrice() {
    return std::to_string(this->price);
}