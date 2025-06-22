#include <stdio.h>

int main() 
{
    int numRows;

    printf("Enter the number of rows: ");
    scanf_s("%d", &numRows);

    int equilateralHeight = numRows;

    for (int i = 1; i <= numRows; i++) 
    {
        for (int j = 1; j <= numRows - 1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) 
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 1; i <= equilateralHeight; i++) 
    {

        for (int j = 1; j <= equilateralHeight - i; j++) 
        {
            printf(" ");
        }
       
        for (int j = 1; j <= i * 2 - 1; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}