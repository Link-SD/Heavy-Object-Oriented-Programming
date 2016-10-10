#include "ParticleEmitter.h"
#include "CurvingParticle.h"

ParticleEmitter::ParticleEmitter()
{
	
}

void ParticleEmitter::setOrigin(int x, int y)
{
	originX = x;
	originY = y;
}

void ParticleEmitter::setColors(ofColor centerColor, ofColor innerColor, ofColor outerColor) {
	center = centerColor;
	inner = innerColor;
	outer = outerColor;
}

void ParticleEmitter::setCurvingParticleRatio(float ratio)
{
	curvingParticleRatio = ratio;

	
}

Particle* ParticleEmitter::emit() {
	Particle* newParticle;

	if (ofRandom(1) > (1 - curvingParticleRatio)) {
		newParticle = new CurvingParticle(originX, originY);
	}
	else {
		newParticle = new Particle(originX, originY);
	}
	newParticle->setColors(center, inner, outer);
	return newParticle;
}

