#include "ofApp.h"
#include "Ball.h"



//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    
    int numBalls = 30;
    
    // fill our vector
    for (int i = 0; i < numBalls; i++) {		// loop 30 times
        
        Ball tempBall;					// create a temporary ball
        balls.push_back(tempBall);		// copy the temporary ball into the balls vector
        // (push_back() adds the ball to the end of the vector, increasing the vector's size by 1)
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
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
