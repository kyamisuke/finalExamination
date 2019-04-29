#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetFrameRate(30);
    sound.load("Broken Heart.mp3");
    sound.setLoop(true);
    sound.setVolume(1.0);
    sound.play();
    
    r = 500;
    
    mesh = ofSpherePrimitive(100, 30).getMesh();

}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.begin();
    
    float time = ofGetElapsedTimef();
    r = 500.0 * sin(time / 3.0);
    
    cam.setPosition(r * sin(time/2.0), 200 * sin(time/2.0), r * cos(time/2.0));
    cam.lookAt(ofVec3f(0, 0, 0), ofVec3f(0, 1, 0));
    
    mesh.setMode(OF_PRIMITIVE_LINE_STRIPx);
    mesh.draw();
    
    cam.end();
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
