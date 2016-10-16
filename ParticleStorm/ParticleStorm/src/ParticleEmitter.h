#pragma once
#include "Particle.h"
#include "ParticleReaper.h"

class ParticleEmitter
{
public:
	

	static ParticleEmitter* instance();


	int maxParticles;

	void setOrigin(int x, int y);

	void setColors(ofColor center, ofColor inner, ofColor outer);

	Particle* emit();

	void setCurvingParticleRatio(float ratio);

private:
	ParticleEmitter();
	static ParticleEmitter* currentInstance;

	int originX;
	int originY;
	float curvingParticleRatio;
	ofColor center;
	ofColor inner;
	ofColor outer;
};

