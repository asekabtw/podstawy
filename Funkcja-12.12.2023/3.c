#include <stdio.h>
int fspr2(int *p1, int *p2);
int fspr3(int *p1, int *p2, int *p3);
int main()
{
  int x, y, z, s;
  x = 2;
  y = 5;

  fspr3(&x, &y, &z);
  // s = fspr2(&x, &y);

  printf("%d, %d \n", x, y);
  // printf("x = %d, y = %d, suma = %d", x, y, s);

  return 0;
}

int fspr2(int *p1, int *p2)
{
  *p1 = 5;
  *p2 = 10;
  return *p1 + *p2;
}

int fspr3(int *p1, int *p2, int *p3)
{
  *p3 = *p1;
  *p1 = *p2;
  *p2 = *p3;
}