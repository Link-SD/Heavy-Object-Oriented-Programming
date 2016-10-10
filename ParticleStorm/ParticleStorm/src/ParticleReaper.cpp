#include "ParticleReaper.h"



ParticleReaper::ParticleReaper()
{

}
void ParticleReaper::destroyParticle(vector<Particle*>& particles) {
	for (vector<Particle*>::iterator it = particles.begin(); it != particles.end();) {
		if ((*it)->isDead()) {
			delete *it;
			it = particles.erase(it);
		}
		else {
			++it;
		}
	}
}


