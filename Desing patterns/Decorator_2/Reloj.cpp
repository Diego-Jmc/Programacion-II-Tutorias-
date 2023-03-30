#include "Reloj.h"
Reloj::Reloj() {
	precio = 30000;
}

Reloj::~Reloj() {}

void Reloj::setRelojBase(IRelojBase* _reloj) {
	throw new string("Ruta erronea");
}

IRelojBase* Reloj::getRelojBase() {
	throw new string("Ruta erronea");
	return NULL;
}

string Reloj::toString() {
	ostringstream s;
	s << "Precio: " << getPrecio() << endl;
	return s.str();
}

double Reloj::getPrecio() {
	return precio;
}