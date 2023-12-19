#include <stdio.h>

int main() {
  double a;
  int b;

  printf("Podaj punkty: ");
  scanf("%lf", &a);

  b = (int)(a / 10);

  switch (b) {
    case 100:
    case 9:
      printf("Ocena jest A");
      break;
    case 8:
    printf("Ocena jest B");
    break;
    case 7:
      printf("Ocena jest C");
      break;
    case 6:
      printf("Ocena jest D");
      break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      printf("Ocena jest F");
      break;
    default: 
      printf("Nie ma takiej opcij");
      break;
  }

  return 0;
}