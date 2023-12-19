#include <stdio.h>

void f1(int *tablica);

int main()
{
  int tab[4] = {1, 3, 5, 2};

  f1(tab);
}

void f1(int *tablica)
{
  int max = tablica[0];
  for (int i = 0; i < 4; i++)
  {
    if (tablica[i] > max)
    {
      max = tablica[i];
    }
  }
  printf("%d ", max);
}