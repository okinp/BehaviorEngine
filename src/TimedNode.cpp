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
	:mDelay(1000)
    {

    }
	TimedNode::TimedNode(unsigned long millis)
	:mDelay(millis)
	{
		
	}
    Return TimedNode::onTick()
    {
		if (mThread.joinable())
		{
			mThread.join();
		}
        return Return::Success;
    }
    void TimedNode::onReturn(const oem::Return &r)
    {
        
    }
	void TimedNode::run()
	{
		using namespace std::chrono;
		auto t0 = high_resolution_clock::now();
		//mThread.sleep_for(milliseconds{ 20 });
	}
}