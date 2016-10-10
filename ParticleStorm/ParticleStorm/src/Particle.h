#pragma once

#include "ofMain.h"

#define MAX_LIFETIME 150

class Particle
{
	public:
		Particle(int startPosX, int startPosY);

		void draw();

		virtual void move();

		void setColors(ofColor center, ofColor inner, ofColor outer);

		bool isDead();

    protected:
		ofPoint position;
		ofVec2f speed;
		float radius;
		long lifetime;

		ofColor centerColor = ofColor::red;
		ofColor innerColor;
		ofColor outerColor;

};

