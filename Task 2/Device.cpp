#include "Device.h"

Device::Device(const Circle& circle)
  :circle(circle)
{
  
}

void Device::move(const Point2d& point)
{
  circle.setCenter(point);
  passed.push_back(point);
}

double Device::distanceTo(const Point2d& point) const
{
  return circle.getCenter().distanceTo(point);
}

void Device::printPassed() const
{
  for (const auto& point : passed)
    std::cout << point;
}