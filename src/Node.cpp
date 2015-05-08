#include "Node.h"
namespace oem {
	Node::Node()
	{
        
	}

	Node::~Node()
	{
        
	}
    void    Node::setChild(NodeRef node)
    {
        if ( !node )
        {
            using namespace std;
            EngineException e;
            throw e;
        }
        mChild = node;
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