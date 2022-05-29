#include "Circle.h"
#include "Point2d.h"
#include "Comparison.h"
#include <string.h>

int main()
{
  Circle manipulatorOne(Point2d(5.5, 0.0), 4);
  Circle manipulatorTwo(Point2d(5.5, 0.0), 4);

  Point2d point(2.0, 0.0);

  auto pointInOne = manipulatorOne.pointInCircle(point);
  auto pointInTwo = manipulatorTwo.pointInCircle(point);

  if (pointInOne == false && pointInTwo == false)
  {
    std::cout << "Out of range" << std::endl;
    return 0;
  }
  
  auto distanceOne = manipulatorOne.distanceTo(point);
  auto distanceTwo = manipulatorTwo.distanceTo(point);

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