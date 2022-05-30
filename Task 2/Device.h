#ifndef  _DEVICE_
#define _DEVICE_
#include "Point2d.h"
#include <vector>
#include "Circle.h"



class Device
{
public:
  
  Device(const Circle& circle);

  void setPosition(const Point2d& point);
  Point2d getPosition();

  void addPosition(const Point2d& point);

  void printPassed();

private:
  Circle circle;
  std::vector<Point2d> passed;
};

#endif // ! _DEVICE_