#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"
#include "Root.h"

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
}

void BehaviorEngineApp::mouseDown( MouseEvent event )
{
    std::cout << "Mouse pressed" << std::endl;
    oem::Root& otherRoor(oem::Root::getInstance());
}

void BehaviorEngineApp::update()
{
}

void BehaviorEngineApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}
CINDER_APP( BehaviorEngineApp, RendererGl )
