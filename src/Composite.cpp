#include "..\include\Composite.h"

namespace oem {
	Composite::Composite()
	{
	}


	Composite::~Composite()
	{
	}
	void Composite::addChild(NodeRef c)
	{
		mChildren.push_back(c);
	}
}
