//
//  Root.h
//  BehaviorEngine
//
//  Created by Nikolas Psaroudakis on 5/4/15.
//
//

#ifndef __BehaviorEngine__Root__
#define __BehaviorEngine__Root__

#include <stdio.h>
#include <boost/noncopyable.hpp>
#include "Node.h"

namespace oem {
    typedef std::shared_ptr<class Root> RootRef;
    class Root : public Node, private boost::noncopyable {
    public:
        static Root&    getInstance();
        Root();
        ~Root();
        virtual Return  onTick();
        virtual void    onReturn(const Return& r);
    private:
    };
}
#endif /* defined(__BehaviorEngine__Root__) */
