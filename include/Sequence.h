#pragma once
#include "Composite.h"

namespace oem {
	class Sequence :
		public Composite
	{
	public:
		Sequence();
		virtual ~Sequence();
		Return					tick();

	private:
		
	};
}