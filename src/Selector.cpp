#include "Selector.h"

namespace oem {
	Selector::Selector()
	{

	}
	Selector::~Selector()
	{

	}
	Return Selector::tick()
	{
		Return r;
		for (auto child : mChildren)
		{
			r = child->tick();
			if (r != Return::Failure)
				break;
		}
		return r;
	}
}
