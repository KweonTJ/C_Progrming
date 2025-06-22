#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void replaceNumbersWithWords(char* str) 
{
    char* numbers[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    char temp[200];

    int i = 0;
    int j = 0;

    while (str[i] != '\0' && j < 200) 
    {
        if (isdigit(str[i])) 
        {
            int digit = str[i] - '0';
            if (digit >= 0 && digit <= 9) 
            {
                char* word = numbers[digit];
                int wordLength = strlen(word);

                for (int k = 0; k < wordLength; k++) 
                {
                    temp[j++] = word[k];
                }
                i++;
            }
        }
        else 
        {
            temp[j++] = str[i++];
        }
    }
    temp[j] = '\0';

    strcpy(str, temp);
}

int main() 
{
    char inputString[200];

    printf("input string: ");
    gets_s(inputString, sizeof(inputString));

    printf("%s -> ", inputString);

    replaceNumbersWithWords(inputString);

    printf("%s\n", inputString);

    return 0;
}

