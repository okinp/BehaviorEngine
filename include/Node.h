#pragma once
#include <memory>
#include "cinder/Signals.h"
#include "BehaviorEngine.h"
namespace oem {
    using namespace ci::signals;
class Node
{
public:
	Node();
	virtual ~Node();
	virtual Return onTick() = 0;
protected:
    virtual void onReturn();
    Signal<Return ()>       sReturn;
    Signal<void ()>         sTick;
    Connection              mConnection;
};
typedef std::shared_ptr<Node> NodeRef;
}