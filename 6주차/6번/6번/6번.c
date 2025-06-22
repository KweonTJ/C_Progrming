#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int number;
    char inputValid = 0;

    while (!inputValid) 
    {
        printf("please input positive integer: ");
        if (scanf_s("%d", &number) == 1 && number > 0) 
        {
            inputValid = 1;
        }
        else 
        {
            while (getchar() != '\n'); 
        }
    }

    int count = 0;
    int originalNumber = number;

    while (number > 0) 
    {
        number /= 10;
        count++;
    }

    printf("%d is %d-digit number.\n", originalNumber, count);

    return 0;
}