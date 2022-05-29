#ifndef _CIRCLE_H
#define _CIRCLE_H

#include "Point2d.h"


class Circle
{
public:
  Circle(Point2d center, double radius);

  bool contain(const Point2d& point);
  double distanceTo(const Point2d& point);

private:
  Point2d center;
  double radius;
};
#endif // !_CIRCLE_H
