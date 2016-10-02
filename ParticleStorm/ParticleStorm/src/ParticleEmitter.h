#pragma once
#include "Particle.h"

class ParticleEmitter
{
public:
	ParticleEmitter();
	
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

