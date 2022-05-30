#ifndef _CIRCLE_H
#define _CIRCLE_H

#include "Point2d.h"
#include <vector>

class Circle
{
public:
  Circle(const Point2d& center);

  bool contain(const Point2d& point) const;

  Point2d getCenter();
  Point2d setCenter(const Point2d& position);

private:
  Point2d center;
  double radius;
};
#endif // !_CIRCLE_H
