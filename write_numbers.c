/*
CH-230-A
a3_p1.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>

int main(void) {
  float x;
  int n;
  scanf("%f", &x);
  scanf("%d", &n);
  while(n <= 0) //check if the input is a valid integer
  {
    printf("Input is invalid, reenter value\n");
    scanf("%d", &n);
  }
  int i = 1;
  while(i <= n) //print x, n times
  {
    printf("%f\n", x);
    i++;
  }

  return 0;
}