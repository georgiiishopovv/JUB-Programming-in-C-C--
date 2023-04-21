#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int matrix[50][50];
    int rows, cols;
    printf("How many rows: ");
    scanf("%d", &rows);
    printf("How many columns: ");
    scanf("%d", &cols);
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    } 

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    } 
}