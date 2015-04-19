#include "..\include\Decorator.h"

namespace oem {
	Decorator::Decorator()
	{

	}

	Decorator::~Decorator()
	{

	}

	void Decorator::setChild(NodeRef c)
	{
		mChild = c;
	}
}