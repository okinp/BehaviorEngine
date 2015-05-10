#pragma once
#include "Node.h"
#include <vector>
namespace oem {
	class Composite : public Node
	{
	public:
		Composite();
		virtual	~Composite();
        virtual Return			onTick();
        virtual void			onReturn(const Return& r);
	protected:

	};
}

