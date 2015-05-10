#pragma once
#include <memory>
#include "cinder/Signals.h"
#include "BehaviorEngine.h"
namespace oem {
    using namespace cinder::signals;
    typedef std::shared_ptr<class Node> NodeRef;
class Node
{
public:
	Node();
	virtual ~Node();
	virtual Return			onTick() = 0;
	virtual void			onReturn(const Return& r) = 0;
	Signal<void()>&			getTickSignal();
	Signal<Return ()>&		getReturnSignal();
    virtual void            addChild( NodeRef node );
protected:
    Signal<Return ()>		sReturn;
    Signal<void ()>			sTick;
    Connection              mConnection;
	std::vector<NodeRef>	mChildren;
};
}