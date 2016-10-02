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

	emitter3 = ParticleEmitter();
	emitter3.setOrigin(500, 500);
	emitter3.setColors(
		ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255)),
		ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255))
	);
	emitter3.setCurvingParticleRatio(0.5);

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

	Particle* freshParticle3 = emitter3.emit();
	particles.push_back(freshParticle3);

}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < particles.size(); ++i)
	{
		particles[i]->draw();
	}
}
