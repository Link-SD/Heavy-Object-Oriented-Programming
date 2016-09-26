#pragma once

#include "Particle.h"
#include "src/CurvingParticle.h"

#define MAX_PARTICLES 50

class ParticleEmitter
{
	public:
		ParticleEmitter();
		void setup();
		void update();
		void draw();

		void setRandomColor(Particle* particle);
		void Reset();

		void keyPressed(int key);

	private:
		Particle* particles[MAX_PARTICLES];
};

