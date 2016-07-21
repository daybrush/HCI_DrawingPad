#include "PenRectangle.h"
PenRectangle::PenRectangle() {
}
PenRectangle::~PenRectangle() {
}

void PenRectangle::setup()
{
    position.clear();
    color.clear(); }


void PenRectangle::add(ofRectangle rectangle, ofColor c)
{
    position.push_back(rectangle);
    color.push_back(c);
}
void PenRectangle::add(int x, int y)
{
    this->add(ofRectangle(x,y,ofRandom(30,50),ofRandom(30,50)), ofColor(ofRandom(0,255),ofRandom(0,255),ofRandom(0,255)));
}
void PenRectangle::clear()
{
    position.clear();
    color.clear();
}


void PenRectangle::draw()
{
    for(int i=0;i<position.size();i++) {
        ofSetColor(color[i]); ofSetRectMode(OF_RECTMODE_CORNER);
        ofDrawRectangle(position[i]);
    } }

