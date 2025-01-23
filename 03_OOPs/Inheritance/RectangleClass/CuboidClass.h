#ifndef CUBOID_HEADER
#define CUBOID_HEADER

#include "RectangleClass.h"

class Cuboid : public Rectangle
{
  private:
  int height;

  public:
  Cuboid(int l = 0, int b = 0, int h = 0) {
    height = h;
    setLength(l);
    setBreadth(b);
  }

  int volume() {
    return getLength() * getBreadth() * height;
  }
};

#endif
