#include "Comparison.h"
#include <math.h>

bool equal(double a, double b, double tol)
{
  return fabs(a - b) <= tol;
}
bool greater(double a, double b, double tol)
{
  return (a - b) > tol;
}
bool less(double a, double b, double tol)
{
  return (b - a) > tol;
}

bool lessOrEqual(double a, double b, double tol)
{
  return less(a, b) || equal(a, b);
}
bool greaterOrEqual(double a, double b, double tol)
{
  return greater(a, b) || equal(a, b);
}
