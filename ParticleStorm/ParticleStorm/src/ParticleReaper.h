#pragma once

#include "Particle.h"
class ParticleReaper
{
public:
	ParticleReaper();

	void destroyParticle(vector<Particle*>& particles);
};

