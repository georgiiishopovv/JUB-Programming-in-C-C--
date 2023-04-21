/*
CH-230-A
a2_p7.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>

int main(void) {
  int i = 8;
  while (i >= 4) 
  {
    printf("i is %d\n", i);
    i--;
  }
  //use {} to include both statements into the loop
  printf("That’s it.\n");

  return 0;
}