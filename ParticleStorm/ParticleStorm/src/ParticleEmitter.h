#pragma once
#include "Particle.h"
#include "ParticleReaper.h"

class ParticleEmitter
{
public:
	

	static ParticleEmitter* instance();

	//Dit is een const omdat het tijdens runtime niet veranderd hoeft te worden.
	const int MAX_PARTICLES = 50;

	void setOrigin(int x, int y);

	void setColors(ofColor center, ofColor inner, ofColor outer);

	Particle* emit() const;

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

