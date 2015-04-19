#include "..\include\Inverter.h"

namespace oem {
	Inverter::Inverter()
	{

	}


	Inverter::~Inverter()
	{

	}
	Return Inverter::tick()
	{
		Return r;
		if (mChild == nullptr)
		{
			return Return::Error;
		}
		r = mChild->tick();
		if ( r == Return::Success )
		{
			r = Return::Failure;
		}
		else if (r == Return::Failure)
		{
			r = Return::Success;
		}
		return r;
	}
}
