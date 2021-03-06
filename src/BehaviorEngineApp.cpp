#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"
#include "Root.h"
#include "TimedNode.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class BehaviorEngineApp : public App {
  public:
    BehaviorEngineApp()
    :mRoot(oem::Root::getInstance())
    {

    };
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
    oem::Root& mRoot;
};

void BehaviorEngineApp::setup()
{
	using namespace oem;
//	NodeRef timed(new TimedNode(10));
//	mRoot.addChild(timed);
}

void BehaviorEngineApp::mouseDown( MouseEvent event )
{

}

void BehaviorEngineApp::update()
{
}

void BehaviorEngineApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}
CINDER_APP( BehaviorEngineApp, RendererGl )
