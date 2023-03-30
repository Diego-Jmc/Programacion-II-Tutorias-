#pragma once
#include "IRejolBase.h"

class Reloj : public IRelojBase {
public:
	Reloj();
	virtual double getPrecio();
	virtual ~Reloj();
	virtual string toString();
	virtual void setRelojBase(IRelojBase*);
	virtual IRelojBase* getRelojBase();
};

