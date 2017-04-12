#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetWindowTitle("openFrameworks");
	ofBackground(0);
	ofSetDepthTest(true);
	ofSetFrameRate(0);

	int line_count = 6;
	int span = 255 / line_count;
	for (int i = 0; i < line_count; i++) {
		ofColor body_color;
		body_color.setHsb(i * span, 255, 255);
		lines.push_back(ColorLine(body_color));
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	for (ColorLine& line : lines){
		line.update();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){

	cam.begin();

	for (ColorLine& line : lines) {
		line.draw();
	}

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
