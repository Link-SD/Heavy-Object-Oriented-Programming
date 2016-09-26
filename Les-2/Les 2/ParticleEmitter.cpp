#include "ParticleEmitter.h"



ParticleEmitter::ParticleEmitter()
{


}
//--------------------------------------------------------------
void ParticleEmitter::setup() {

	for (int i = 0; i < MAX_PARTICLES; i += 2) {
		particles[i] = new Particle();
		particles[i + 1] = new CurvingParticle();
		setRandomColor(particles[i]);
	}
}
//--------------------------------------------------------------
void ParticleEmitter::update() {
	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i]->move();
	}
}
//--------------------------------------------------------------
void ParticleEmitter::draw() {
	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i]->draw();
	}
}
//--------------------------------------------------------------
void ParticleEmitter::keyPressed(int key) {
	Reset();
}
//--------------------------------------------------------------
void ParticleEmitter::Reset() {
	for (int i = 0; i < MAX_PARTICLES; i += 2) {
		particles[i] = new Particle();
		particles[i + 1] = new CurvingParticle();
		setRandomColor(particles[i]);


	}
}
//--------------------------------------------------------------
void ParticleEmitter::setRandomColor(Particle* particle) {
	float random = ofRandom(10);
	if (random > 3 && random <= 2) {
		particle->setColor(ofColor::white, ofColor(227, 47, 27, 127), ofColor(213, 54, 85, 127));
	}
	else if (random > 7) {
		particle->setColor(ofColor::blue, ofColor(131, 85, 61, 127), ofColor(213, 54, 85, 127));
	}
}
//--------------------------------------------------------------