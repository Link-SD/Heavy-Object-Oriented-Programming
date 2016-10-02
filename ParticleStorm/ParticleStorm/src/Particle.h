#pragma once

#include "ofMain.h"
class Particle
{
	public:
		Particle(int startPosX, int startPosY);

		void draw();

		virtual void move();

		void setColors(ofColor center, ofColor inner, ofColor outer);


    protected:
		ofPoint position;
		ofVec2f speed;
		float radius;
		long lifetime;

		ofColor centerColor = ofColor::red;
		ofColor innerColor;
		ofColor outerColor;

};

