#include <stdio.h>

int fspr(int a, int b);
int main()
{
  int x, y, s;
  x = 2;
  y = 5;

  s = fspr(x, y);

  printf("x = %d, y = %d, s = %d", x, y, s);

  return 0;
}

int fspr(int a, int b)
{
  a = 5;
  b = 10;
  return a + b;
}