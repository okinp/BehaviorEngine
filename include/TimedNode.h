//
//  TimedNode.h
//  BehaviorEngine
//
//  Created by Nikolas Psaroudakis on 5/8/15.
//
//

#ifndef __BehaviorEngine__TimedNode__
#define __BehaviorEngine__TimedNode__

#include <thread>
#include <chrono>
#include "Node.h"

namespace oem {
    class TimedNode : public Node {
    public:
        TimedNode();
        virtual Return onTick();
        virtual void   onReturn(const Return& r);
    private:
        
    };
}
#endif /* defined(__BehaviorEngine__TimedNode__) */
