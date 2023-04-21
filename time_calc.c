/*
CH-230-A
a2_p3.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>

int main(void) {
  int days;
  int weeks;
  int hours;
  printf("Enter the number of hours: ");
  scanf("%d", &hours);
  printf("\nEnter the number of days: ");
  scanf("%d", &days);
  printf("\nEnter the number of weeks: ");
  scanf("%d", &weeks);

  //1 day has 24 hours => 1 week has 7*24 = 168 hours
  printf("\nThe number of total hours is: %d", hours + days*24 + weeks*168);
  
  return 0;
}