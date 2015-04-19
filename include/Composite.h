#pragma once
#include "Node.h"
#include <vector>
namespace oem {
	class Composite : public Node
	{
	public:
		Composite();
		virtual	~Composite();
		void					addChild(NodeRef c);
	protected:
		std::vector<NodeRef>	mChildren;
	};
}

