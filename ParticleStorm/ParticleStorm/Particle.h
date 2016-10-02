#pragma once
class Particle
{

#include "ofMain.h"

public:
	Particle(int startPosX, int startPosY);

	void draw();

	virtual void move();

	void setColors(ofColor center, ofColor inner, ofColor outer);
	
};

