//
//  Ball.hpp
//  mySketch
//
//  Created by younkue's air on 2016. 7. 4..
//
//

#ifndef Ball_hpp
#define Ball_hpp
#include "ofMain.h"
#include <stdio.h>
class Ball {
public:
    float x;
    float y;
    float radius;
    ofColor color;
    Ball();
    Ball(float x, float y);
    void draw();
};
#endif /* Ball_hpp */
