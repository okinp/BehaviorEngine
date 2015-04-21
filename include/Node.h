#pragma once
#include <memory>
#include "cinder\Signals.h"
#include "BehaviorEngine.h"
namespace oem {
class Node
{
public:
	Node();
	virtual ~Node();
	virtual Return tick() = 0;
protected:
	cinder::signals::Signal< Return()> mTickSignal;
	cinder::signals::Signal< Return ()> mReturnSignal;
};
typedef std::shared_ptr<Node> NodeRef;
}