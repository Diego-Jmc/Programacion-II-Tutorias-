//
// Created by diego on 26/4/2023.
//

#include "SamsumgWatch.h"


SamsungWatch::SamsungWatch() {
    this->branch = "Samsung";
    this->price = 399;
}

std::string SamsungWatch::getBranch() {
    return this->branch;
}

std::string SamsungWatch::Price() {
    return std::to_string(this->price);
}
