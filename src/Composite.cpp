#include "Composite.h"

namespace oem {
	Composite::Composite()
	{
        
	}
	Composite::~Composite()
	{
        
	}
	void Composite::addChild(NodeRef c)
	{
        
		mChildren.push_back(c);
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
