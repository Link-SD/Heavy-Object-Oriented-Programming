#pragma once

#include "ofMain.h"
#include "../Particle.h"

class ofApp : public ofBaseApp{

	public:
		Particle part1;
		list<Particle> particleList;


		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		
};
