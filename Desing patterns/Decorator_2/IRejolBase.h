#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class IRelojBase {
public:
	double precio;
	virtual double getPrecio() = 0;
	virtual ~IRelojBase() {};
	virtual string toString() = 0;
	virtual IRelojBase* getRelojBase() = 0;
};