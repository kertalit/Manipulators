#include "Circle.h"
#include "Comparison.h"


Circle::Circle(Point2d position)
  :position(position)
{

}


double Circle::distanceTo(PointPtr point)
{
  return sqrt(pow((point->x - position.x), 2) + pow((point->y - position.y), 2));
}

void Circle::printPassed()
{
  for (auto point : passed)
  {
    std::cout << *point;
  }
}

void Circle::setPosition(const Point2d& point)
{
  position = point;
}

void Circle::addPosition(PointPtr point)
{
  passed.push_back(point);
}