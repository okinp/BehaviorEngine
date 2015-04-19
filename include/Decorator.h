#pragma once
#include "Node.h"
namespace oem {
	class Decorator : public Node
	{
	public:
		Decorator();
		virtual		~Decorator();
		void		setChild(NodeRef c);
	protected:
		NodeRef		mChild;
	};
}