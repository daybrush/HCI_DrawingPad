#include "PenLine.h"


PenLine::PenLine() {
}


PenLine::~PenLine() {
}

void PenLine::setup()
{
    position.clear();
    color.clear();
}


void PenLine::add(ofPoint point, ofColor c)
{
    position.push_back(point);
    color.push_back(c);
}
void PenLine::add(int x, int y)
{
    this->add(ofPoint(x, y, 0), ofColor(ofRandom(0,255),ofRandom(0,255),ofRandom(0,255)));
}
void PenLine::clear()
{
    position.clear();
    color.clear(); }


void PenLine::draw()
{
    for(int i=1;i<position.size();i++) {
        ofSetColor(color[i]); ofSetRectMode(OF_RECTMODE_CORNER);
        ofDrawLine(position[i-1].x, position[i-1].y, position[i].x, position[i].y);
    } }

