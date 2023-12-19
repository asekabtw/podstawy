#include <stdio.h>
#define N 100

int main() {
  int i = 1;

  while (i <= N) {
    printf("%d ", i);
    i *= 2;
  }

  return 0;
}