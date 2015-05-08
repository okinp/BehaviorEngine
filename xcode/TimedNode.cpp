//
//  TimedNode.cpp
//  BehaviorEngine
//
//  Created by Nikolas Psaroudakis on 5/8/15.
//
//

#include "TimedNode.h"

namespace oem {
    TimedNode::TimedNode()
    {
        
    }
    Return TimedNode::onTick()
    {
        return Return::Success;
    }
    void TimedNode::onReturn(const oem::Return &r)
    {
        
    }
}