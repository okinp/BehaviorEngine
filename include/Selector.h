#pragma once
#include "Composite.h"
namespace oem {
	class Selector :
		public Composite
	{
	public:
		Selector();
		virtual ~Selector();
		Return		tick();
	};
}
