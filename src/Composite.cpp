#include "Composite.h"

namespace oem {
	Composite::Composite()
	{
        
	}
	Composite::~Composite()
	{
        
	}
	void	Composite::addChild(NodeRef node)
	{
		if (!node)
		{
			throw EngineException();
		}
		mChildren.push_back(node);
	}
    Return  Composite::onTick()
    {
        std::cout << "onTick called" << std::endl;
        return Return::Success;
    }
    void    Composite::onReturn(const Return& r)
    {
        std::cout << "onReturn called" << std::endl;
    }
}
