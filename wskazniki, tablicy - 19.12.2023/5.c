#include <stdio.h>

void f1(int *tablica);

int main()
{
  int tab[4] = {1, 2, 3, 4};

  f1(tab);
}

void f1(int *tablica)
{
  for (int i = 0; i < 4; i++)
  {
    printf("%d ", *(tablica + i));
  }
}