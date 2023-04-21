/*
CH-230-A
a8_p7.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //open the two files for reading
    FILE *fptr1;
    fptr1 = fopen("text1.txt", "r");

    if(fptr1 == NULL)
    {
        printf("Error opening the file");
        exit(1);
    }

    FILE *fptr2;
    fptr2 = fopen("text2.txt", "r");

    if(fptr2 == NULL)
    {
        printf("Error opening the file");
        exit(1);
    }

    //open the file for writing
    FILE *output;
    output = fopen("merge12.txt", "w");

    if(output == NULL)
    {
        printf("Error opening the file");
        exit(1);
    }

    char line1[300];
    char line2[300];

    //read the two files line by line and input the lines into the new file
    while(fgets(line1, 300, fptr1) != NULL)
    {
        fputs(line1, output);
    }
    while(fgets(line2, 300, fptr2) != NULL)
    {
        fputs(line2, output);
    }

    fclose(fptr1);
    fclose(fptr2);
    fclose(output);
    return 0;
}