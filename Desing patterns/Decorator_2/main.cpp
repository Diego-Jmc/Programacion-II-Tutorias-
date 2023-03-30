#include "IRejolBase.h"
#include "Reloj.h"
#include "DecoratorRelojInternet.h"
using std::cout;
using std::string;

int main() {
	IRelojBase* reloj = new Reloj();
	cout << "Reloj sin decorar" << endl;
	cout << reloj->toString();
	reloj = new DecoratorRelojInternet(reloj);
	cout << "Reloj decorado con internet" << endl;
	cout << reloj->toString();
	return 0;
}