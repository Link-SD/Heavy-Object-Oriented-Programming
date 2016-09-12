#include "Particle.h"

Particle::Particle() {
	radius = ofRandom(0,20);
	position = ofPoint(ofGetWidth()/2, ofGetHeight()/2);

	speed = ofVec2f(ofRandom(-1, 1), ofRandom(-1, 1));

	innerColour = ofColor(31, 127, 255, 127);
	outerColour = ofColor(128, 255, 255, 15);
}

void Particle::setup() {

}

void Particle::move() {
	position += speed;
}

void Particle::draw() {
	ofSetColor(outerColour);
	ofDrawCircle(position.x, position.y, radius * 2);

	ofSetColor(innerColour);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColour);
	ofDrawCircle(position.x, position.y, radius * 0.25);
}
