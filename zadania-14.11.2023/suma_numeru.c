#include <stdio.h>

int main()
{
  int liczba, suma;
  suma = 0;

  printf("Podaj liczbe: ");
  scanf("%d", &liczba);

  while (liczba > 0)
  {
    suma += (liczba % 10);
    // printf("%d ", suma);
    liczba = liczba / 10;
  }

  printf("%d", suma);

  return 0;
}