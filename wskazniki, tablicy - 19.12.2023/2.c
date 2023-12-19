#include <stdio.h>

void f1(double *x, double *y);
int main()
{
  double a = 8;
  double b = 5;

  f1(&a, &b);

  printf("%.lf, %.lf", a, b);
}

void f1(double *x, double *y)
{
  *x *= 2;
  *y *= 2;
}