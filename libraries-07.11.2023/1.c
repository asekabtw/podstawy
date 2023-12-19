#include <stdio.h>
#define N 10
#include <math.h>

int main()
{
  int a, b;
  // Zadanie 1
  a = 1;
  printf("\nZadanie 1: \n1...N\n");
  while (a <= N)
  {
    printf("%d ", a);
    a++;
  }

  // Zadanie 2
  a = N;
  printf("\n\nZadanie 2: \n N...1 \n");
  while (a >= 1)
  {
    printf("%d ", a);
    a--;
  }

  // Zadanie 3
  a = 0;
  b = 0;
  printf("\n\nZadanie 3: \n N...1 \n");
  while (b <= N)
  {
    a = pow(2, b);
    printf("%d ", a);
    b++;
  }

  // Zadanie 4
  a = 2;
  b = 0;
  printf("\n\nZadanie 4: \n 2, 4, 6...< N \n");
  while (a <= N)
  {
    printf("%d ", a);
    a += 2;
  }

  // Zadanie 5
  a = 0;
  b = 1;
  int c = 0;
  printf("\n\nZadanie 5: \n suma = 1 + 2 + 3 + ... + N \n");
  while (b < N)
  {
    c = c + b;
    printf("%d + ", b);
    a = b;
    b++;
  }
  c += N;
  printf("%d = %d", N, c);

  // Zadanie 6
  a = 1;
  b = 1;
  c = 1;
  printf("\n\nZadanie 6: \n 1!, 2!, ..., N! \n");
  while (a <= N)
  {
    while (b <= a)
    {
      c *= b;
      b++;
    }
    printf("%d ", c);
    a++;
  }

  // Zadanie 7
  a = 0;
  b = 1;
  c = 1;
  printf("\n\nZadanie 7: \n suma = 1 - 2 + 3 - 4 + ... +- N \n");
  while (b <= N)
  {
    if (b % 2 == 0)
    {
      a = a - b;
    }
    else
    {
      a = a + b;
    }
    // a = a + b;
    // printf("%d ", a);
    b++;
  }
  printf("%d", a);

  // Zadanie 8
  a = 1;
  b = 1;
  c = 1;
  printf("\n\nZadanie 8: \n an = 3 * an-1 +2 \n");
  while (a < N)
  {
    b = 3 * c + 2;
    c = b;
    printf("%d ", c);
    a++;
  }

  // Zadanie 9
  a = 1;
  b = 1;
  c = 0;
  printf("\n\nZadanie 9: \n suma = 1 - 2 + 4 - 8 + ... +- N \n");
  while (a <= N)
  {

    if (a % 2 == 0)
    {
      c = c - b;
    }
    else
    {
      c = c + b;
    }
    b *= 2;
    a++;
  }
  printf("%d", c);

  // Zadanie 10
  a = 0;
  b = 0;

  int a1, a2, sum;
  a1 = 0;
  a2 = 1;
  sum = 0;
  printf("\n\nZadanie 10: \n 0, 1, 1, 2, 3, 5, 8 \n");
  while (a <= N)
  {
    printf("%d ", a1);
    sum = a1 + a2;
    a1 = a2;
    a2 = sum;
    a++;
  }

  return 0;
}