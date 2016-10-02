#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(ofColor::honeyDew);

	emitter = ParticleEmitter();
	emitter.maxParticles = 10;
	emitter.setOrigin(ofGetWidth() / 2, ofGetHeight() / 2);
	emitter.setCurvingParticleRatio(.5);
	
	//Optional if only one color is wanted
	/*emitter.setColors(
		ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255)),
		ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255)),
		ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255))
	);*/
}

//--------------------------------------------------------------
void ofApp::update(){
	for (int i = 0; i < particles.size(); i++)
	{
		particles[i]->move();
	}


	if (particles.size() <= emitter.maxParticles - 1) {
		Particle* newParticle = emitter.emit();
	
	//comment this section to stop spawning particles with different colors;
	newParticle->setColors(
		ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255)),
		ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255)),
		ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255)));
	//<<>>
	
	particles.push_back(newParticle);
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < particles.size(); ++i)
	{
		particles[i]->draw();
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}
