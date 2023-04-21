/*
CH-230-A
a8_p9.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //open the file for binary writing
    FILE *output;
    output = fopen("output.txt", "wb");
    if(output == NULL)
    {
        printf("Cannot open the file!");
        exit(1);
    }

    int n;
    scanf("%d", &n);
    getchar();
    char names_arr[n][30];
    char buffer[64];
    
    //read the names of the different files using a double array
    for(int i = 0; i < n; i++)
    {
        scanf("%s", names_arr[i]);
    }

    
    printf("Concating the content of %d files ...\n", n);
    printf("The result is: \n");
    for(int i = 0; i < n; i++)
    {
        //open the files for binary reading one after another
        FILE *fptr;
        fptr = fopen(names_arr[i], "rb");
        if(fptr == NULL)
        {
            printf("Cannot open the file!");
            exit(1);
        }

        //write the content of each file on the console and in the new file
        int reading = fread(buffer, 1, 64, fptr);
        fwrite(buffer, reading, 1, stdout);
        fwrite("\n", 1, 1, stdout);
        fwrite(buffer, reading, 1, output); 
        fwrite("\n", 1, 1, output);

        //close the current reading file to move to the next
        fclose(fptr);
    }
    printf("The result was written into output.txt");
    fclose(output);
    return 0;
}