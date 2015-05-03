#pragma once
#include <memory>
#include "cinder/Signals.h"
#include "BehaviorEngine.h"
namespace oem {
    using namespace cinder::signals;
class Node
{
public:
	Node();
	virtual ~Node();
	virtual Return			onTick() = 0;
	virtual void			onReturn(const Return& r) = 0;
	Signal<void()>&			getTickSignal();
	Signal<Return ()>&		getReturnSignal();
protected:
    Signal<Return ()>		sReturn;
    Signal<void ()>			sTick;
    Connection              mConnection;
};
typedef std::shared_ptr<Node> NodeRef;
}