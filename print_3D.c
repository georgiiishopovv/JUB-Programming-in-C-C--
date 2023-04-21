/*
CH-230-A
a5_p9.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reading_3D(int ***array, int rows, int columns, int depth)
{
    //read the array iterating through the rows, columns and then the depth
    for(int r = 0; r < rows; r++)
    {
        for(int c = 0; c < columns; c++)
        {
            for(int d = 0; d < depth; d++)
            {   
                scanf("%d", &array[r][c][d]);
            }
        }
    }
}

void print_2D_sections(int ***array, int rows, int columns, int depth)
{
    //print the 2D sections of the 3D array by going through the 
    //rows and columns of each depth level
    for(int d = 0; d < depth; d++)
    {
        //separate the different 2D sections
        printf("Section %d:\n", d+1);
        for(int r = 0; r < rows; r++)
        {
            for(int c = 0; c < columns; c++)
            {   
                printf("%d ", array[r][c][d]);
            }
            //separate the rows
            printf("\n");
        }
    }
}

int main()
{
    int rows;
    scanf("%d", &rows);
    int columns; 
    scanf("%d", &columns);
    int depth;
    scanf("%d", &depth);

    //allocate memory for the rows of the array
    int ***array;
    array = (int ***) malloc(sizeof(int **) * rows);
    //check if the allocation was correct
    if(array == NULL)
    {
        exit(1);
    }
    for(int i = 0; i < rows; i++)
    {   
        //allocate memory for the columns in each row
        array[i] = (int **) malloc(sizeof(int *) * columns);
        //check if the allocation was correct
        if(array[i] == NULL)
        {
            exit(1);
        }
    }
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            //allocate memory for the depth
            array[i][j] = (int *) malloc(sizeof(int) * depth);
            //check if the allocation was correct
            if(array[i][j] == NULL)
            {
                exit(1);
            }
        }
    }
    //call the functions to read the 3D array and print the 2D sections
    reading_3D(array, rows, columns, depth);
    print_2D_sections(array, rows, columns, depth);

    //free the allocated memory
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            free(array[i][j]);
        }
        free(array[i]);
    }
    free(array);

    return 0;
}