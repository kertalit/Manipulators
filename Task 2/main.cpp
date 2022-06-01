#include "Circle.h"
#include "Point2d.h"
#include "Comparison.h"
#include <string.h>
#include "Device.h"

int main()
{
  Circle circle1(Point2d(0, 0), 1);
  Circle circle2(Point2d(2, 1), 1);

  Device device1(circle1);
  Device device2(circle2);
  
  std::vector<Point2d> points = { Point2d(1, 3), Point2d(2, 1.41), Point2d(0.2, -7), Point2d(-5, -1), Point2d(0, 9) }; 

  for (const auto& point : points)
  {
    if (lessOrEqual(device1.distanceTo(point), device2.distanceTo(point))) 
      device1.move(point);
    else
      device2.move(point);
  }

  std::cout << "Device1: "; 
  device1.printPassed();
  std::cout << std::endl;

  std::cout << "Device2: ";
  device2.printPassed();
  std::cout << std::endl;
}

