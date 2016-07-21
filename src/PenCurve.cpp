#include "PenCurve.h"


PenCurve::PenCurve() {
}


PenCurve::~PenCurve() {
}

void PenCurve::setup()
{
    position.clear();
    color.clear();
}


void PenCurve::add(ofPoint point, ofColor c)
{
    position.push_back(point);
    color.push_back(c);
}
void PenCurve::add(int x, int y)
{
    this->add(ofPoint(x, y, 0), ofColor(255,255,255));
}
void PenCurve::clear()
{
    position.clear();
    color.clear(); }


void PenCurve::draw()
{
    for(int i=3;i<position.size();i++) {
        ofSetColor(color[i]); ofSetRectMode(OF_RECTMODE_CORNER);
        ofDrawCurve(position[i-3].x, position[i-3].y, position[i-2].x, position[i-2].y, position[i-1].x, position[i-1].y, position[i].x, position[i].y);
    } }

