#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

void toUpperCase(char* str)
{
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 'a' + 'A';
        }
    }
}

int main() 
{
    char inputString[100];

    printf("input string: ");
    gets_s(inputString, sizeof(inputString));

    char resultString[100];

    strcpy(resultString, inputString); 
    toUpperCase(resultString); 

    printf("%s -> %s\n", inputString, resultString);

    return 0;
}

