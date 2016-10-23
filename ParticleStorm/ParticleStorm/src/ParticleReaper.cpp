#include "ParticleReaper.h"



ParticleReaper::ParticleReaper()
{

}

//Ik begrijp nog niet helemaal de toepassing van een const op een methode  
//Ik begrijp wel dat een const variabele een waarde heeft wat niet meer door het systeem veranderd kan/mag worden.

void ParticleReaper::destroyParticle(vector<Particle*>& particles) const {
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


