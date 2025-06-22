#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int number;
    long long factorial = 1;
    char inputValid = 0;

    do {
        printf("please input factorial: ");
        if (scanf_s("%d", &number) == 1) 
        {
            char ch;
            if (number > 0 && scanf_s(" %c", &ch) == 1 && ch == '!') 
            {
                inputValid = 1;
                int originalNumber = number;
                while (number > 0) 
                {
                    factorial *= number;
                    number--;
                }
                printf("%d! = %lld\n", originalNumber, factorial);
            }
            else 
            {
                inputValid = 0;
                while (getchar() != '\n');
            }
        }
        else 
        {
            while (getchar() != '\n');
        }
    } 
    while (!inputValid);

    return 0;
}