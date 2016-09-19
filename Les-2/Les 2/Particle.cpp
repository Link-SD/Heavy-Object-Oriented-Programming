#include "Particle.h"

Particle::Particle() {
	radius = ofRandom(0, 20);
	position = ofPoint(ofGetWidth() / 2, ofGetHeight() / 2);

	speed = ofVec2f(ofRandom(-1, 1), ofRandom(-1, 1));

	innerColour = ofColor(31, 127, 255, 127);
	outerColour = ofColor(128, 255, 255, 15);

	
}

void Particle::setup() {

}

void Particle::move() {

	position += speed;

	//position.x = position.x + cos(90)*radius;
	//position.y = position.y + sin(90)*radius;
	//angle = time * 20;
	//ofRotate(angle, 0, 1, 0);
}

void Particle::draw() {
	ofSetColor(outerColour);
	ofDrawCircle(position.x, position.y, radius * 2);

	ofSetColor(innerColour);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColour);
	ofDrawCircle(position.x, position.y, radius * 0.25);
}
