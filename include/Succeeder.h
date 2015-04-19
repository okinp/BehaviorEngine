#pragma once
#include "Decorator.h"

namespace oem {
	class Succeeder : public Decorator
	{
	public:
		Succeeder();
		virtual ~Succeeder();
		Return tick();
	};
}
