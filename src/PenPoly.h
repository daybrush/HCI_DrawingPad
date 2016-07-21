#include "PenGroup.h"
class PenPoly : public PenGroup{
public:
    PenPoly();
    ~PenPoly();
    void add(ofRectangle rect, ofColor c);
    virtual void setup();
    virtual void add(int x, int y);
    virtual void draw();
    virtual void clear();
private:
    vector<ofRectangle> position;
    vector<ofColor> color;
};