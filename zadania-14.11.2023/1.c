#include <stdio.h>
#define N 5

int main()
{
  int a, suma;

  suma = 0;
  a = 1;

  while (a <= N)
  {
    if (a % 2 == 0)
    {
      suma = suma - a * (a + 1);
    }
    else
    {
      suma = suma + a * (a + 1);
    }
    a++;
  }

  printf("%d", suma);

  return 0;
}