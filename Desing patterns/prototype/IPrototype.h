//
// Created by diego on 16/3/2023.
//

#ifndef PROTOTYPE_IPROTOTYPE_H
#define PROTOTYPE_IPROTOTYPE_H
#include <iostream>

 // first we define a prototype interface
 // every object that implements this interface will be clonable
class IPrototype {
public:
    virtual IPrototype * clone() = 0;

};


#endif //PROTOTYPE_IPROTOTYPE_H
