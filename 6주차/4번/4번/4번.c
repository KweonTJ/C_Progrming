#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int number;
    char inputValid = 0;

    while (!inputValid) {
        printf("input positive integer: ");
        if (scanf_s("%d", &number) == 1 && number >= 0) 
        {
            inputValid = 1; 
        }
        else 
        {
            while (getchar() != '\n'); 
        }
    }

    int power = 1;
    int exponent = 0;

    while (power * 2 <= number) 
    {
        power *= 2;
        printf(" %d", power);
    }

    printf("\n");

    return 0;
    
}