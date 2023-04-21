/*
CH-230-A
a4_p7.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>

void matrix(int elements, int array[30][30])
{
    printf("The entered matrix is:\n");
    //print the matrix row by row and column by column
    for(int i = 0; i < elements; i++) //iterate through the array
    {
        for(int j = 0; j < elements; j++)
        {
            //include a space between the numbers
            printf("%d ", array[i][j]);
        }
        printf("\n"); //separate the rows
    }
}
void main_diagonal(int elements, int array[30][30])
{
    printf("Under the main diagonal:\n");
    for(int i = 0; i < elements; i++) //iterate through the array
    {
        for(int j = 0; j < elements; j++)
        {
            //whenever the row position is higher than the column position
            //the elements will be under the main diagonal
            if(i > j) 
            {
                printf("%d ", array[i][j]); //include a space between the numbers
            }
        }
    }
    printf("\n");
}

int main()
{
    int array[30][30];
    int n;
    scanf("%d", &n);
    //populate the array row by row and column by column
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    //call the function to print the matrix
    matrix(n, array);
    //call the function to print the numbers under the main diagonal
    main_diagonal(n, array);
    return 0;
}