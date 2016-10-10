#include "Particle.h"



Particle::Particle(int startPosX, int startPosY)
{
	position = ofPoint(startPosX, startPosX);
	radius = ofRandom(10, 50);
	speed = ofVec2f(ofRandom(-2.5,2.5), ofRandom(-2.5, 2.5));
	lifetime = 0;
}

void Particle::draw() {

	//Draw outercircle
	ofSetColor(outerColor);
	ofDrawCircle(position.x, position.y, radius * 1.5);

	//Draw innercircle
	ofSetColor(innerColor);
	ofDrawCircle(position.x, position.y, radius);

	//Draw center of circle
	ofSetColor(centerColor);
	ofDrawCircle(position.x, position.y, radius * 0.25);

}

void Particle::move() {
	position += speed;
	lifetime++;
}

void Particle::setColors(ofColor center, ofColor inner, ofColor outer) {
	centerColor = center;
	innerColor = inner;
	outerColor = outer;
}
bool Particle::isDead() {
	
	return lifetime > MAX_LIFETIME;
}
