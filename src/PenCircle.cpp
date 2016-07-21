#include "PenCircle.h"


PenCircle::PenCircle() {
}


PenCircle::~PenCircle() {
}

void PenCircle::setup()
{
    position.clear();
    color.clear(); }


void PenCircle::add(ofRectangle rectangle, ofColor c)
{
    position.push_back(rectangle);
    color.push_back(c);
}
void PenCircle::add(int x, int y)
{
    this->add(ofRectangle(x,y,ofRandom(30,50),ofRandom(30,50)), ofColor(ofRandom(0,255),ofRandom(0,255),ofRandom(0,255)));
}
void PenCircle::clear()
{
    position.clear();
    color.clear(); }


void PenCircle::draw()
{
    for(int i=0;i<position.size();i++) {
        ofSetColor(color[i]); ofSetRectMode(OF_RECTMODE_CORNER);
        ofDrawCircle(position[i].x, position[i].y, position[i].width / 2);
    } }

