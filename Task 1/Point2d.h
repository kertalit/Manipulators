#ifndef _POINT2D_H
#define _POINT2D_H



class Point2d
{
public:

  Point2d(double x, double y);

  double distanceTo(const Point2d& point) const;

  double x;
  double y;
};


#endif // !_POINT2D_H