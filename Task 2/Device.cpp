#include "Device.h"


Device::Device(const Circle& circle)
  :circle(circle)
{
  
}

void Device::setPosition(const Point2d& point)
{
  circle.setCenter(point);
}

Point2d Device::getPosition()
{
  return circle.getCenter();
}

void Device::addPosition(const Point2d& point)
{
  passed.push_back(point);
}

void Device::printPassed()
{
  for (const auto& point : passed)
  {
    std::cout << point;
  }
}