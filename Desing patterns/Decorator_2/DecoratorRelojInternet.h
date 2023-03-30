#pragma once
#include "IRejolBase.h"
class DecoratorRelojInternet : public IRelojBase {
protected:
	IRelojBase* ptrReloj;
public:
	DecoratorRelojInternet(IRelojBase*);
	virtual ~DecoratorRelojInternet();
	virtual string toString() override;
	virtual double getPrecio() override;
	virtual IRelojBase* getRelojBase() override;
};

