#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", a);

  switch (a) {
    case 1: printf("1"); break;
    case 2: printf("2"); break;
    case 3: printf("3"); break;
    default: printf("Nie ma takiej opcij");
  }

  return 0;
}