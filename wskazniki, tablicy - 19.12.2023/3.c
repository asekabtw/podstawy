#include <stdio.h>
#include <math.h>

float f1(float *x, float *y);
int main()
{
  float a = -8.5;
  float b = -5.3;
  float suma;

  printf("%.2f", f1(&a, &b));
}

float f1(float *x, float *y)
{
  *x = fabsf(*x);
  *y = fabsf(*y);
  float suma = *x + *y;

  return suma;
}