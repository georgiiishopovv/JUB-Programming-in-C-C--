/*
CH-230-A
a5_p8.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void multiplication_matrix(int **matrix1, int **matrix2, int **result, int n, 
                    int m, int p)
{
    int sum = 0;
    //populate the result array by using the formula for matrix multiplication
    for(int i = 0; i < n; i++)
    {
        for(int k = 0; k < p; k++)
        {
            for(int j = 0; j < m; j++)
            {
                //store the sum of the products between the different elements
                //of the two matrices
                sum += (matrix1[i][j]*matrix2[j][k]);
            }
            result[i][k] = sum;
            //make sum equal to zero after placing an 
            //element in the result array
            sum = 0;
        }
    }
    printf("The multiplication result AxB:");
    printf("\n");
    //print the result matrix row by row and column by column
    for(int i = 0; i < n; i++)
    {
        for(int k = 0; k < p; k++)
        {
            printf("%d ", result[i][k]);
        }
        //separate the rows
        printf("\n");
    }
}


void printing(int **matrix1, int **matrix2, int n, int m, int p)
{
    printf("Matrix A:");
    printf("\n");
    //print the first matrix row by row and column by column
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        //separate the rows
        printf("\n");
    }
    printf("Matrix B:");
    printf("\n");
    //print the second matrix row by row and column by column
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < p; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        //separate the rows
        printf("\n");
    }
}

void reading(int **matrix1, int **matrix2, int n, int m, int p)
{
    //reading the first matrix with n rows and m columns
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    //reading the second matrix with m rows and p columns
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < p; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
}

int main()
{
    int **matrix1, **matrix2, **result;
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);
    int p;
    scanf("%d", &p);
    //allocate memory for the rows of the first matrix
    matrix1 = (int **) malloc(sizeof(int *)*n);
    //check if the allocation was correct
    if(matrix1 == NULL)
    {
        exit(1);
    }
    for(int i = 0; i < n; i++)
    {
        //allocate memory for the columns in each row
        matrix1[i] = (int *) malloc(sizeof(int)*m);
        //check if the allocation was correct
        if(matrix1[i] == NULL)
        {
            exit(1);
        }
    }
    //allocate memory for the rows of the second matrix
    matrix2 = (int **) malloc(sizeof(int *)*m);
    //check if the allocation was correct
    if(matrix2 == NULL)
    {
        exit(1);
    }
    for(int i = 0; i < m; i++)
    {
        //allocate memory for the columns in each row
        matrix2[i] = (int *) malloc(sizeof(int)*p);
        //check if the allocation was correct
        if(matrix2[i] == NULL)
        {
            exit(1);
        }
    }
    //allocate memory for the rows of the result matrix
    result = (int **) malloc(sizeof(int *)*n);
    //check if the allocation was correct
    if(result == NULL)
    {
        exit(1);
    }
    for(int i = 0; i < n; i++)
    {
        //allocate memory for the columns in each row
        result[i] = (int *) malloc(sizeof(int)*p);
        //check if the allocation was correct
        if(result[i] == NULL)
        {
            exit(1);
        }
    }
    //call the corresponding functions to obtain the needed information
    reading(matrix1, matrix2, n, m, p);
    printing(matrix1, matrix2, n, m, p);
    multiplication_matrix(matrix1, matrix2, result, n, m, p);

    //free the allocated memory for the first matrix
    for(int i = 0; i < n; i++)
    {
        free(matrix1[i]);
    }
    free(matrix1);
    //free the allocated memory for the second matrix
    for(int i = 0; i < m; i++)
    {
        free(matrix2[i]);
    }
    free(matrix2);
    //free the allocated memory for the result matrix
    for(int i = 0; i < n; i++)
    {
        free(result[i]);
    }
    free(result);

    return 0;
}