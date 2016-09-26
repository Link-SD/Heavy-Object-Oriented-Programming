#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(ofColor::black);

	emitter1 = ParticleEmitter();
	emitter1.setOrigin(100, 100);
	emitter1.setCurvingParticleRatio(0.1);

	emitter2 = ParticleEmitter();
	emitter2.setOrigin(400, 400);
	emitter2.setCurvingParticleRatio(0.8);

}

//--------------------------------------------------------------
void ofApp::update(){
	for (int i = 0; i < particles.size(); ++i)
	{
		particles[i]->move();
	}
	Particle* freshParticle = emitter1.emit();
	particles.push_back(freshParticle);

	Particle* freshParticle2 = emitter2.emit();
	particles.push_back(freshParticle2);
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < particles.size(); ++i)
	{
		particles[i]->draw();
	}
}
