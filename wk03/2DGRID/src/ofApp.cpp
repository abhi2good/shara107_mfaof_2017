#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    for(int x=0; ofGetWidth(); x+=10){
 
    for(int y=0; ofGetWidth(); y+=10){
            
            grid.push_back(ofVec2f(x,y));
}
        
        r= 0;
        g= 0;
        b= 0;
        
        
    }
}


//--------------------------------------------------------------
void ofApp::update(){
    
    r++;
    g++;
    b++;
    
    r=r%255;
    g=g%255;
    b=b%255;
    


}

//--------------------------------------------------------------
void ofApp::draw(){

float zoom = ofMap(ofGetMouseX(),0,ofGetWidth(),1,0.001);
    
    
    for(int i=0; i<grid.size(); i++ ){
        
        ofColor color;
    
float hue = ofNoise(grid[i].x*zoom, grid[i].y*zoom)*255;
    float sat=255;
    float brt=200;

    color= ofColor::fromHsb(hue, sat, brt);
        
        
        ofSetColor(color);
        ofDrawRectangle(grid[i],10,10);
               
               }
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
