#ifndef  _DEVICE_
#define _DEVICE_
#include "Point2d.h"
#include <vector>
#include "Circle.h"

class Device
{
public:
  
  Device(const Circle& circle);

  void move(const Point2d& point);

  double distanceTo(const Point2d& point) const;

  void printPassed() const;

private:
  Circle circle;
  std::vector<Point2d> passed;
};

#endif // ! _DEVICE_