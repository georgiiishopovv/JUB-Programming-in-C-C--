#include <stdio.h>

int main(void) {
  float x;
  int n;
  printf("Enter a float");
  scanf("%f\n", &x);
  scanf("%d\n", &n);
  while(n <= 0)
  {
    printf("Input is invalid, reenter value");
  }

  return 0;
}