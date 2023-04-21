/*
CH-230-A
a2_p5.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>

int main(void) {
  int a;
  printf("Enter an integer value for a: ");
  scanf("%d", &a);
  printf("The value of a = %d\n", a);
  int *a_ptr;
  a_ptr = &a; //store the address of a
  printf("Address of a = %p\n", a_ptr); //print the address of a
  *a_ptr += 5; //increase a using its pointer
  printf("Updated value of a = %d\n", *a_ptr); 
  printf("Address of a = %p\n", a_ptr);
  
  return 0;
}