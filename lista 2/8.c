#include <stdio.h>

int main(void) {
  int rok;
  printf("Podaj rok: ");
  scanf("%d", &rok);

  if (rok % 4 == 0) {
    if (rok % 100 == 0 && rok % 400 != 0) {
      printf("Rok nie jest przestepny");
    } else {
      printf("Rok jest przestepny");
    }
  } else printf("Rok nie jest przestepny");

  return 0;
}