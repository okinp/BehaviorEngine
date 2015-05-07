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
        std::cout << "Constructor called" << std::endl;
    }
    Root& Root::getInstance()
    {
        static Root instance;
        return instance;
    }
    Return Root::onTick()
    {
        return Return::Success;
    }
    void Root::onReturn(const Return& r)
    {
        
    }
}