#pragma once

#include "ofMain.h"
#include "Particle.h"

class ofApp : public ofBaseApp{

	public:
		Particle part1;
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		
};
