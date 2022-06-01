#include "Point2d.h"
#include <math.h>

Point2d::Point2d()
  :x(0), y(0)
{

}

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

std::ostream& operator<<(std::ostream& stream, const Point2d& point)
{
  stream << "(" << point.x << "," << " " << point.y << ")" << " ";

  return stream;
}

std::istream& operator>>(std::istream& stream, Point2d& point)
{
  stream >> point.x >> point.y;

  return stream;
}
