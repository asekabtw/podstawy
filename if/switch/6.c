#include <stdio.h>
#define N 10

int main() {
  int i = 0;
  int a = 1;

  while (a <= N) {
    i += a;
    a++;
  }
  printf("%d", i);

  return 0;
}