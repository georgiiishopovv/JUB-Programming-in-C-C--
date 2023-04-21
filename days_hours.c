/*
CH-230-A
a2_p10.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>

int main(void) {
  int n;
  printf("Enter a positive, non-zero integer: "); 
    scanf("%d", &n);

  while(n <= 0) //check the input
    {
      printf("Enter a positive, non-zero integer: ");
      scanf("%d", &n);
    }
  int i = 1;
  while(i <= n) //print all days from 1 to the value of the input
    {
      if(i == 1) //differentiate between day and days
      {
        printf("%d day = %d hours\n", i, i*24); //1 day has 24 hours
        i++;
      }
      else
      {
        printf("%d days = %d hours\n", i, i*24); //1 day has 24 hours
        i++;
      }
    }
    return 0;
}    