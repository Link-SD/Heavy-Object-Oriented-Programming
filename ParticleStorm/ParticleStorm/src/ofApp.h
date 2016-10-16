#pragma once

#include "ofMain.h"
#include "ParticleEmitter.h"
#include "Particle.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		vector<Particle*> particles;

		
		ParticleReaper reaper;
		void keyPressed(int key);
};

