#include "ParticleEmitter.h"
#include "CurvingParticle.h"


ParticleEmitter::ParticleEmitter()
{
}


ParticleEmitter::~ParticleEmitter()
{
}

void ParticleEmitter::setOrigin(int x, int y)
{
	originX = x;
	originY = y;
}

void ParticleEmitter::setCurvingParticleRatio(float ratio)
{
	curvingParticleRatio = ratio;
}

void ParticleEmitter::setColors(ofColor innerColor, ofColor outerColor) {
	inner = innerColor;
	outer = outerColor;
}

Particle* ParticleEmitter::emit() {
	Particle* newParticle;

	if (ofRandom(1) > (1 - curvingParticleRatio)) {
		newParticle = new CurvingParticle(originX, originY);
	}
	else {
		newParticle = new Particle(originX, originY);
	}

	return newParticle;
}
