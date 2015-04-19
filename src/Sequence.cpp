#include "..\include\Sequence.h"
namespace oem {
	Sequence::Sequence()
	{

	}
	Sequence::~Sequence()
	{
	}
	Return Sequence::tick()
	{
		Return r;
		for (auto child : mChildren)
		{
			r = child->tick();
			if (r != Return::Success )
				break;
		}
		return r;
	}
}