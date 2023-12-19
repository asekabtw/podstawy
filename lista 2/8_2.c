#include <stdio.h>

int main(void) {
  int rok;
  printf("Podaj rok: ");
  scanf("%d", &rok);

  if (rok % 4 == 0 && rok % 100 != 0 || rok % 400 == 0) {
    printf("Jest");
  } else {
    printf("Nie jest");
  }

  return 0;
}