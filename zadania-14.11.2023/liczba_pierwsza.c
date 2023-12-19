#include <stdio.h>

int main()
{
  int i, suma, a, help;

  printf("Podaj liczbe: ");
  scanf("%d", &a);

  i = 0;
  suma = 0;
  while (i < a / 2)
  {
    if (a % i == 0)
    {
      help = 1;
    }
  }
  if (help == 0)
  {
    printf("Liczba %d jest pierwsza\n", a);
  }
  else
  {
    printf("Liczba %d nie jest pierwsza\n", a);
  }

  return 0;
}