#include "PenGroup.h"
class PenCircle : public PenGroup{
public:
    PenCircle();
    ~PenCircle();
    void add(ofRectangle rect, ofColor c);
    virtual void setup();
    virtual void add(int x, int y);
    virtual void draw();
    virtual void clear();
private:
    vector<ofRectangle> position;
    vector<ofColor> color;
};