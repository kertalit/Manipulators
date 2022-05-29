#include <iostream>
#include "Circle.h"
#include "Point2d.h"
#include "Comparison.h"
#include <string.h>

int main()
{
  Circle device1(Point2d(5.5, 0.0), 4);
  Circle device2(Point2d(5.5, 0.0), 4);

  Point2d point(2.0, 0.0);

  auto pointInOne = device1.contain(point);
  auto pointInTwo = device2.contain(point);

  if (pointInOne == false && pointInTwo == false)
  {
    std::cout << "Out of range" << std::endl;
    return 0;
  }
  
  auto distanceOne = device1.distanceTo(point);
  auto distanceTwo = device2.distanceTo(point);

  if (pointInOne && pointInTwo)
  {
    if (equal(distanceOne, distanceTwo))
    {
      std::cout << "Use any manipulator" << std::endl;
      return 0;
    }

    if (less(distanceOne, distanceTwo))
    {
      std::cout << "Use manipulator # 1" << std::endl;
      return 0;
    }
    else
    {
      std::cout << "Use manipulator # 2" << std::endl;
      return 0;
    }
  }

  if (pointInOne)
  {
    std::cout << "Use any manipulator # 1" << std::endl;
    return 0;
  }

  if (pointInTwo)
  {
    std::cout << "Use manipulator # 2" << std::endl;
    return 0;
  }
}