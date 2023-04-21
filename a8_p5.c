/*
CH-230-A
a8_p5.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char first;
    char second;
    
    //open the file for reading
    FILE *fptr;
    fptr = fopen("chars.txt", "r");
    if(fptr == NULL)
    {
        printf("An error occured!");
        exit(1);
    }

    //get the first and the second character and store their numeric sum
    first = getc(fptr);
    second = getc(fptr);
    int numeric_sum = first + second;

    //open a file for writing
    FILE *fptr_write;
    fptr_write = fopen("codesum.txt", "w");
    if(fptr_write == NULL)
    {
        printf("An error occured!");
        exit(1);
    }
    
    //write the numeric sum into the new file
    fprintf(fptr_write, "%d", numeric_sum);

    fclose(fptr);
    fclose(fptr_write);
    return 0;
}
