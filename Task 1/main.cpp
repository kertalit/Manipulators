#include <iostream>
#include "Circle.h"
#include "Point2d.h"
#include "Comparison.h"
#include <string.h>

int main()
{
  Circle device1(Point2d(5.5, 0.0), 4);
  Circle device2(Point2d(7.5, 0.0), 3);

  Point2d point(2.0, 0.0);

  auto hit1 = device1.contain(point);
  auto hit2 = device2.contain(point);

  if (!hit1 && !hit2)
  {
    std::cout << "Out of range" << std::endl;
    return 0;
  }

  if (hit1 && hit2)
  {
    auto distance1 = device1.getCenter().distanceTo(point);
    auto distance2 = device2.getCenter().distanceTo(point);

    if (equal(distance1, distance2))
      std::cout << "Use any manipulator" << std::endl;
    else if  (less(distance1, distance2))
      std::cout << "Use manipulator # 1" << std::endl;
    else
      std::cout << "Use manipulator # 2" << std::endl;
  }
  else if (hit1)
    std::cout << "Use manipulator # 1" << std::endl;
  else
    std::cout << "Use manipulator # 2" << std::endl;

  return 0;
}