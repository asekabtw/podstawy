#include <stdio.h>

void f1(int *x, int *y);
int main()
{
  int a = 2;
  int b = 4;
  int *k, *t;

  f1(&a, &b);

  printf("%d, %d", a, b);
}

void f1(int *x, int *y)
{
  int suma;
  suma = *x + *y;

  *x = suma;
  *y = *x - *y;
}