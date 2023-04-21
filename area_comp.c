/*
CH-230-A
a2_p4.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>

int main(void) {
  float a;
  float b;
  float h;

  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &h);

  printf("square area=%f\n", a*a); 
  printf("rectangle area=%f\n", a*b); //side1 * side2 
  printf("triangle area=%f\n", (a*h)/2); //(side * height)/2
  printf("trapezoid area=%f\n", ((a+b)/2)*h); //((side1 + side2)/2) * height

  printf("Hello");
  return 0;
}