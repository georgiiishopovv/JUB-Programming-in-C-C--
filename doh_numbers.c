/*
CH-230-A
a2_p2.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>

int main(void) {
  char user_input;
  scanf("%c", &user_input);
  printf("character=%c\n", user_input); 
  printf("decimal=%d\n", user_input);
  printf("octal=%o\n", user_input); //print octal
  printf("hexadecimal=%x\n", user_input); //print hexadecimal
  
  return 0;
}