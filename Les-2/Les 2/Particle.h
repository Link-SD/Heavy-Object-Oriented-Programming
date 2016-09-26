#pragma once

#include "ofMain.h"


class Particle
{
public:
	ofPoint position;
	float radius;
	ofVec2f speed;
	

	long lifeTime;

	float time = ofGetElapsedTimef();
	float angle;

	ofColor centerColour = ofColor::white;
	ofColor innerColour;
	ofColor outerColour;

	Particle();

	void setup();
	void move();
	void draw();

	void setColor(ofColor outer, ofColor inner, ofColor center);

};

