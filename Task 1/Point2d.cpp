#include "Point2d.h"
#include <math.h>


Point2d::Point2d(double x, double y)
  : x(x), y(y)
{

}

double Point2d::distanceTo(const Point2d& point) const
{
  double dx = this->x - point.x;
  double dy = this->y - point.y;

  return sqrt(dx * dx + dy * dy);
}