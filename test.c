/*
CH-230-A
a2_p3.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>

void ret(int *a, int *b_ptr)
{
    *a+=3;
    *b_ptr += 5;
}

int main(void) 
{
    /*
    int *ptr;
    int string[] = {1, 3, 5};
    ptr = &string[0];
    for(int i = 0; i < 3; i++)
    {
        printf("%d\n", ptr[i]);
    }
    */
   /*
   int a = 5;
   int b = 6;
   int *b_ptr;
   b_ptr = &b;
   ret(&a, b_ptr);
   printf("%d\n", a);
   printf("%d", *b_ptr);
   */

   int arr[] = {1, 2, 3, 4};
   int *arr_ptr;
   arr_ptr = &arr[0];
   for(int i = 0; arr_ptr[i] != 4; i++)
   {
      //scanf("%d", &arr_ptr[i]);
      printf("%d\n", arr_ptr[i]);
   }
  /*
  int a = 5;
  int *ptr;
  ptr = &a;
  printf("%d", *ptr);
  */

}