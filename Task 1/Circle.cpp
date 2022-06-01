#include "Circle.h"
#include "Comparison.h"
#include <math.h>

Circle::Circle(const Point2d& center, double radius)
  :center(center), radius(radius)
{

}

bool Circle::contain(const Point2d& point) const
{
  return lessOrEqual(center.distanceTo(point), radius);
}

Point2d Circle::getCenter() const
{
  return center;
}

