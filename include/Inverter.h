#pragma once
#include "Decorator.h"
namespace oem {
	class Inverter : public Decorator
	{
	public:
		Inverter();
		virtual ~Inverter();
		Return tick();
	};
}
