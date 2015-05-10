//
//  Root.cpp
//  BehaviorEngine
//
//  Created by Nikolas Psaroudakis on 5/4/15.
//
//

#include "Root.h"

namespace oem {
    Root::Root()
    {
        using namespace std;
        cout << "Constructor called" << endl;
    }
    Root::~Root()
    {
        
    }
	void    Root::addChild(NodeRef node)
	{
		mChild = node;
		//sTick.connect(mChild->getTickSignal());
	}

    Root& Root::getInstance()
    {
        using namespace std;
        cout << "getInstance called" << endl;
        static Root instance;
        return instance;
    }
    Return Root::onTick()
    {
		sTick.emit();
        return Return::Success;
    }
    void Root::onReturn(const Return& r)
    {
        
    }
}