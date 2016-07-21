#include "PenGroup.h"
class PenCurve : public PenGroup{
public:
    PenCurve();
    ~PenCurve();
    void add(ofPoint point, ofColor c);
    virtual void setup();
    virtual void add(int x, int y);
    virtual void draw();
    virtual void clear();
private:
    vector<ofPoint> position;
    vector<ofColor> color;
};