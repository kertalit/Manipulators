#include "Circle.h"
#include "Comparison.h"


Circle::Circle(Point2d center, double radius)
  :center(center), radius(radius)
{

}

bool Circle::pointInCircle(const Point2d& point)
{
  auto distance = distanceTo(point);

  return lessOrEqual(distance, radius);
}

double Circle::distanceTo(const Point2d& point)
{
  return sqrt(pow((point.x - center.x), 2) + pow((point.y - center.y), 2));
}