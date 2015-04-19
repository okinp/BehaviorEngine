#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class BehaviorEngineApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void BehaviorEngineApp::setup()
{
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
