#include <stdio.h>

float srednia(int a, int b);
int wieksza(int a, int b);
int liczby(int a);

int main()
{
  int x, y, suma;
  x = 2;
  y = 5;
  // suma = fsuma(x, y);

  printf("%.1f\n", srednia(x, y));
  printf("%d\n", wieksza(x, y));
  printf("%d\n", liczby(y));
}

float srednia(int a, int b)
{
  return (a + b) / 2.0;
}

int wieksza(int a, int b)
{
  return a > b ? a : b;
}

int liczby(int a)
{
  int suma = 0;
  for (int i = 1; i <= a; i++)
  {
    suma += i;
  }

  return suma;
}