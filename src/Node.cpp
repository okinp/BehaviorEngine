#include "Node.h"
namespace oem {
	Node::Node()
	{
        
	}

	Node::~Node()
	{
        
	}
	Signal<void()>& Node::getTickSignal()
	{
		return sTick;
	}
	Signal<Return ()>&	Node::getReturnSignal()
	{
		return sReturn;
	}
}