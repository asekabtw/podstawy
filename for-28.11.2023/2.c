#include <stdio.h>

int main()
{
  // Od dolu
  for (int i = 1; i <= 10; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%d ", j);
    }
    printf("\n");
  }

  printf("\n");

  // Od gory
  for (int i = 10; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%d ", j);
    }
    printf("\n");
  }

  printf("\n");

  int a;
  // Do prawej
  for (int i = 10; i >= 1; i--)
  {
    a = i;
    while (a < 10)
    {
      printf("  ");
      a++;
    }
    for (int j = 1; j <= i; j++)
    {
      printf("%d ", j);
    }
    printf("\n");
  }

  return 0;
}