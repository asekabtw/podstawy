#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int los, x;
  int a = 0;

  los = rand() % 10 + 1;

  //  printf("Wylosowano: %d\n", los);

  do {
    printf("Numer: ");
    scanf("%d", &x);

    if(x == los) {
      printf("Zgadles!\n");
    } else {
      printf("Nie zgadles!\n");
      a++;
    }
  } while(x != los && a < 3);

  if (a >= 3) {
    printf("Proby zrobione: %d", a);
  } else {
    printf("Liczba rowna sie: %d", x);
  }

  

  return 0;
}