#pragma once
#include "Particle.h"
#include "ParticleReaper.h"

class ParticleEmitter
{
public:
	ParticleEmitter();

	int maxParticles;

	void setOrigin(int x, int y);

	void setColors(ofColor center, ofColor inner, ofColor outer);

	Particle* emit();

	void setCurvingParticleRatio(float ratio);

private:
	int originX;
	int originY;
	float curvingParticleRatio;
	ofColor center;
	ofColor inner;
	ofColor outer;
};

