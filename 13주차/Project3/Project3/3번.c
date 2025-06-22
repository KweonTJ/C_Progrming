#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int number;
    char inputValid = 0;

    while (!inputValid)
    {
        printf("please input positive integer: ");
        if (scanf_s("%d", &number) == 1 && number > 0)
        {
            inputValid = 1;
        }
        else {
            while (getchar() != '\n');
        }
    }

    int originalNumber = number;
    int reversedNumber = 0;

    while (number > 0)
    {
        reversedNumber = reversedNumber * 10 + number % 10;
        number /= 10;
    }

    printf("%d => %d\n", originalNumber, reversedNumber);

    return 0;
}