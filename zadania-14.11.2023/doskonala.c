#include <stdio.h>
#define N 1000

int main()
{
  int a, i, liczba, suma;

  // printf("Podaj liczbe: ");
  // scanf("%d", &liczba);

  a = 1;
  while (a < N)
  {
    i = 1;
    suma = 0;
    while (i <= a / 2)
    {
      if (a % i == 0)
      {
        suma += i;
        // printf("%d ", suma);
      }
      i++;
    }

    if (suma == a)
    {
      printf("Liczba %d jest doskonala!\n", suma);
    }
    // else
    // {
    //   printf("Liczba nie jest doskonala!");
    // }
    a++;
  }

  return 0;
}
