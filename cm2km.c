/*
CH-230-A
a3_p3.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>

float convert(int cm)
{
    //1 km = 100000 cm
    return (cm / 100000.0); //divide by float to get a precise answer
}

int main() 
{
  int cm;
  scanf("%d", &cm);
  float km = convert(cm); //store the return value of the function
  printf("Result of conversion: %f\n", km);

  return 0;
}