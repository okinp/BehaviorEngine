#include "Succeeder.h"
namespace oem {
	Succeeder::Succeeder()
	{

	}

	Succeeder::~Succeeder()
	{

	}

	Return Succeeder::tick()
	{
		if (mChild == nullptr)
		{
			return Return::Error;
		}
		mChild->getTickSignal().emit();
		Return r;
		if (r == Return::Success || r == Return::Failure)
		{
			r = Return::Success;
		}
		return r;
	}
}
