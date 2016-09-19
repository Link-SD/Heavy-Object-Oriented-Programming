#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	part1 = Particle();
	particleList = list<Particle>(0);
}

//--------------------------------------------------------------
void ofApp::update(){
	//part1.move();

	for each (Particle p in particleList)
	{
		p.move();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
//	part1.draw();

	for each (Particle p in particleList)
	{
		p.draw();
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

