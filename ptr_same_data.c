

#include <stdio.h>

int main(void) {
  double x;
  double y;
  printf("Enter two double values: ");
  scanf("%lf" "%lf", &x, &y);
  double *ptr_one;
  double *ptr_two;
  double *ptr_three;
  //store the addresses into the corresponding pointer variables
  ptr_one = &x;
  ptr_two = &x;
  ptr_three = &y;
  //print each address
  printf("Pointer One Address = %p\n", ptr_one);
  printf("Pointer Two Address = %p\n", ptr_two);
  printf("Pointer Three Address = %p\n", ptr_three);

  return 0;
}