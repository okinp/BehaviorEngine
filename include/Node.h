#pragma once
#include <memory>
#include "BehaviorEngine.h"
namespace oem {
class Node
{
public:
	Node();
	virtual ~Node();
	virtual Return tick() = 0;
};
typedef std::shared_ptr<Node> NodeRef;
}