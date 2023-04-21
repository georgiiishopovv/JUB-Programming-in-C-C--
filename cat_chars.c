/*
CH-230-A
a2_p9.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <ctype.h> //library that contains the isdigit and isalpha functions

int main(void) {
  char user_input;
  scanf("%c", &user_input);

  if(isdigit(user_input)) //isdigit() checks whether the input is a digit
  {
    printf("%c is a digit\n", user_input);
  }
  else if(isalpha(user_input)) //isalpha() checks whether the input is a letter
  {
    printf("%c is a letter\n", user_input);
  }
  else //enter if the input is neither a letter, nor a digit
  {
    printf("%c is some other symbol\n", user_input);
  }
  return 0;
}    