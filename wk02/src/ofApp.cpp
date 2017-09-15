#include "ofApp.h"


void ofApp::setup(){
    
    ofSetWindowShape(800, 350);
    ofEnableAntiAliasing();
    ofSetCircleResolution(50);
   
    
}

void ofApp::update(){

}


void ofApp::draw(){

ofBackground(0);
ofSetColor(255);
ofFill();
ofSetLineWidth(2);


ofDrawRectangle(50, 50, 100, 100);
ofDrawCircle(250, 100, 50);
ofDrawEllipse(400, 100, 80, 100);
ofDrawTriangle(500, 150, 550, 50, 600, 150);
ofDrawLine(700, 50, 700, 150);


ofNoFill(); ofSetLineWidth(4.5);
ofDrawRectangle(50, 200, 100, 100);
ofDrawCircle(250, 250, 50);
ofDrawEllipse(400, 250, 80, 100);
ofDrawTriangle(500, 300, 550, 200, 600, 300);
ofDrawLine(700, 200, 700, 300);
    
// Again, for generating the series of lines from figure 2:
//for (int i=0; i<11; i++) {
//	ofDrawLine(650, 200+(i*10), 750, 225+(i*5));
//}


    
    
    
}

void ofApp::keyPressed(int key){
    
}

void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
