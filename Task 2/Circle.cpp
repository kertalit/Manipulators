#include "Circle.h"
#include "Comparison.h"

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

void Circle::setCenter(const Point2d& position)
{
  center = position;
}
