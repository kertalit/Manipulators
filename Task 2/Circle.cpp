#include "Circle.h"
#include "Comparison.h"


Circle::Circle(const Point2d& center)
  :center(center)
{

}

bool Circle::contain(const Point2d& point) const
{
  return lessOrEqual(center.distanceTo(point), radius);
}

Point2d Circle::getCenter()
{
  return center;
}

Point2d Circle::setCenter(const Point2d& position)
{
  return center = position;
}
