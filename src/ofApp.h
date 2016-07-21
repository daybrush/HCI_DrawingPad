#pragma once

#include "ofMain.h"
#include "Ball.h"
#include "PenGroup.h"
#include "PenPoly.h"
#include "PenCircle.h"
#include "PenRectangle.h"
#include "PenLine.h"
#include "PenCurve.h"
#include "RectButton.h"
class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    void clear();
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
private:
    //bool inside(ofRectangle buttonRect, int x, int y);
    int buttonMode;
    RectButton *buttons;
//    PenRectangle *penRectangle;
    PenGroup** pens;
    
};
