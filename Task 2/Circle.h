#ifndef _CIRCLE_H
#define _CIRCLE_H

#include "Point2d.h"
#include <vector>

class Circle
{
public:
  Circle(Point2d position);

  double distanceTo(PointPtr point);

  void printPassed();

  void setPosition(const Point2d& point);

  void addPosition(PointPtr point);

private:
  Point2d position;
  std::vector<PointPtr> passed;
};
#endif // !_CIRCLE_H
