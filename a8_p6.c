/*
CH-230-A
a8_p6.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //read the names of the files
    char name1[30];
    char name2[30];
    fgets(name1, 30, stdin);
    fgets(name2, 30, stdin);
    name1[strlen(name1) - 1] = '\0';
    name2[strlen(name2) - 1] = '\0';

    FILE *fptr_name1;
    FILE *fptr_name2;
    FILE *output;

    //open both files for reading
    fptr_name1 = fopen(name1, "r");
    if(fptr_name1 == NULL)
    {
        printf("Cannot open file!\n");
        exit(1);
    }
    
    fptr_name2 = fopen(name2, "r");
    if(fptr_name2 == NULL)
    {
        printf("Cannot open file!\n");
        exit(1);
    }

    double double1 = 0.0;
    double double2 = 0.0;
    
    //extract the double values from the two files
    fscanf(fptr_name1, "%lf", &double1);
    fscanf(fptr_name2, "%lf", &double2);

    double sum = double1 + double2;
    double diff = double1 - double2;
    double prod = double1 * double2;
    double div = double1 / double2;

    output = fopen("results.txt", "w");
    if(output == NULL)
    {
        printf("Cannot open file!\n");
        exit(1);
    }   
    
    //write the calculations into the new file
    fprintf(output, "%lf\n%lf\n%lf\n%lf\n", sum, diff, prod, div);

    fclose(fptr_name1);
    fclose(fptr_name2);
    fclose(output);
    return 0;
}