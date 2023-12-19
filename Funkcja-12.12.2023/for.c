#include <stdio.h>

int main()
{
  int i, j, a;

  j = 10 % 16;
  printf("%d", j);

  for (j = 0; j < 4; j++)
  {
    for (i = 1; i <= j; i += 2)
      a = i + j;
    printf("%d ", a);
  }

  return 0;
}