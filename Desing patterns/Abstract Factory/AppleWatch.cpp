//
// Created by diego on 26/4/2023.
//

#include "AppleWatch.h"
#include "AppleWatch.h"

AppleWatch::AppleWatch() {
    this->branch = "Apple";
    this->price = 399;
}

std::string AppleWatch::getBranch() {
    return this->branch;
}

std::string AppleWatch::Price() {
    return std::to_string(this->price);
}
