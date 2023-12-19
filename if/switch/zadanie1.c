#include <stdio.h>

int main(void) {
  int a, b, sum;

  scanf("%d", &a);
  scanf("%d", &b);

  sum = (a * b > 0) ? a * b : a + b; 

  printf("%d", sum);

  return 0;
}