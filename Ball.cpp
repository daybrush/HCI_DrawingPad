//
//  Ball.cpp
//  mySketch
//
//  Created by younkue's air on 2016. 7. 4..
//
//

#include "Ball.h"

Ball::Ball() {
    
}
Ball::Ball(float x, float y) {
    this->x = x;
    this->y = y;
    this->radius = ofRandom(30, 50);
    this->color = ofColor(ofRandom(0, 255),ofRandom(0, 255),ofRandom(0, 255) );
}

void Ball::draw() {
    ofPushStyle();
    ofSetColor(color);
    
    ofDrawCircle(x,y, radius);
    ofPopStyle();
}
