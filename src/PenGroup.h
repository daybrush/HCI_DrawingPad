#pragma once

#include "ofMain.h"
class PenGroup {
public:
    PenGroup();
    ~PenGroup();
    virtual void setup() = 0;
    virtual void add(int x, int y) = 0;
    virtual void draw() = 0;
    virtual void clear() = 0;
};