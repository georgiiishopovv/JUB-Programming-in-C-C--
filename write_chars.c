/*
CH-230-A
a3_p2.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>

int main(void) {
  char ch;
  int n;
  printf("Enter a lowercase character: ");
  scanf("%c", &ch);
  printf("Enter an integer: ");
  scanf("%d", &n);

  printf("%c\n", ch); //print the first character (input)
  for(int i = 1; i <= n; i++) //print remaining "n" characters
  {
    printf("%c\n", ch-i); //print every lower character (ASCII relation)
  }
  return 0;
}