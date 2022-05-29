#include "Circle.h"
#include "Point2d.h"
#include "Comparison.h"
#include <string.h>

int main()
{
  Circle device1(Point2d(0, 0));
  Circle device2(Point2d(2, 1));
  
  std::vector<Point2d> temp = { Point2d(1, 3), Point2d(2, 1.41), Point2d(0.2, -7), Point2d(-5, -1), Point2d(0, 9) }; // how to fill a vector with smart pointers at once
  std::vector<PointPtr> points;

  for (auto i = 0; i < temp.size(); ++i)
  {
    points.push_back(std::make_shared<Point2d>(temp[i]));
  }

  for (auto point : points)
  {
    if (lessOrEqual(device1.distanceTo(point), device2.distanceTo(point))) // maybe need to create a function
    {
      device1.setPosition(*point);
      device1.addPosition(point);
    }
    else
    {
      device2.setPosition(*point);
      device2.addPosition(point);
    }
  }

  std::cout << "Device1: "; 
  device1.printPassed();
  std::cout << std::endl;

  std::cout << "Device2: ";
  device2.printPassed();
  std::cout << std::endl;
}

