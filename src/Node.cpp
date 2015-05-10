#include "Node.h"
namespace oem {
	Node::Node()
	{
        
	}

	Node::~Node()
	{
        
	}
    void    Node::addChild(NodeRef node)
    {
        if ( !node )
        {
            using namespace std;
            EngineException e;
            throw e;
        }
        mChildren.push_back(node);
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