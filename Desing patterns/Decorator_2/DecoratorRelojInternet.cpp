#include "DecoratorRelojInternet.h"

DecoratorRelojInternet::DecoratorRelojInternet(IRelojBase* _reloj) {
	ptrReloj = _reloj;
}

DecoratorRelojInternet::~DecoratorRelojInternet() {
}

string DecoratorRelojInternet::toString() {
	ostringstream s;
	s << "Yo soy el decorador de internet y valgo: " << getPrecio() << endl;
	return s.str();
}

double DecoratorRelojInternet::getPrecio()
{
	return ptrReloj->getPrecio() + 4000;
}

IRelojBase* DecoratorRelojInternet::getRelojBase()
{
	return ptrReloj;
}
