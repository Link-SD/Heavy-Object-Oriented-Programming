#pragma once
#include "Particle.h"

class ParticleEmitter
{
public:
	ParticleEmitter();
	~ParticleEmitter();

	void setOrigin(int x, int y);

	void setCurvingParticleRatio(float ratio);

	void setColors(ofColor innerColor, ofColor outerColor);

	Particle* emit();

private:
	int originX;
	int originY;
	float curvingParticleRatio;
	ofColor inner;
	ofColor outer;
};

