/*
CH-230-A
a2_p8.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);
  if(a % 2 == 0 && a % 7 == 0) //check for division remainders
  {
    printf("The number is divisible by 2 and 7\n");
  }
  else //if it enters this if, the number is not divisible by 2 and 7
  {
    printf("The number is NOT divisible by 2 and 7\n");
  }

  return 0;
}    