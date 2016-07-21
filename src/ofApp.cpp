#include "ofApp.h"


//-------------------------------------------------------------
#define PEN_SIZE 3

void ofApp::setup(){
    buttonMode = 0;
    buttons = new RectButton[PEN_SIZE + 1];
    for(int i = 0; i <= PEN_SIZE; ++i) {
        buttons[i].setup(ofRectangle(i * 100,0,100,100),ofColor(ofRandom(0, 255),ofRandom(0, 255),ofRandom(0, 255)),"button");
    }
    
    pens = new PenGroup*[PEN_SIZE];
    //pens[0] clear
    
    pens[0] = new PenRectangle();
    pens[1] = new PenCircle();
    pens[2] = new PenLine();
    //pens[3] = new PenCurve();
    
    for(int i = 0; i < PEN_SIZE; ++i) {
        pens[i]->setup();
    }
}
//--------------------------------------------------------------


//--------------------------------------------------------------
void ofApp::clear() {
    for(int i = 0; i < PEN_SIZE; ++i) {
        pens[i]->clear();
    }
}
void ofApp::draw(){
    ofBackground(0, 0, 0);
    for(int i = 0; i < PEN_SIZE; ++i) {
        pens[i]->draw();
    }
    for(int i = 0; i <= PEN_SIZE; ++i) {
        buttons[i].draw();
    }
}

void ofApp::update(){
    if (buttonMode == 0) {
        clear();
        buttonMode = -1;
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
    if (buttonMode > 0) {
        pens[buttonMode - 1]->add(x, y);
    }
}




//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    for(int i = 0; i <= PEN_SIZE; ++i) {
        if(buttons[i].inside(x, y)) {
            buttonMode = i;
            cout << "buttonMode" << buttonMode << endl;
            break;
        }
    }
}
//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    for(int i = 0; i <= PEN_SIZE; ++i) {
        buttons[i].inside(x, y);
    }
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
