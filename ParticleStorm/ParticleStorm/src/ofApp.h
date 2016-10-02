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

		ParticleEmitter emitter;

		void keyPressed(int key);
};

