#ifndef _COMPRASION_H
#define _COMPRASION_H
#include "Circle.h"

bool equal(double a, double b, double tol = 1.e-10);
bool greater(double a, double b, double tol = 1.e-10);
bool less(double a, double b, double tol = 1.e-10);

bool lessOrEqual(double a, double b, double tol = 1.e-10);
bool greaterOrEqual(double a, double b, double tol = 1.e-10);

#endif // !_COMPRASION_H

