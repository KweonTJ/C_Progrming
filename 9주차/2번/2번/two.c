#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char inputString[520];
    int wordCount = 0;
    int alphabetCount = 0;
    int punctuationCount = 0;

    printf("Enter a sentence: ");
    fgets(inputString, sizeof(inputString), stdin);

    for (int i = 0; inputString[i] != '\0'; i++)
    {
        if (isalpha(inputString[i]))
        {
            alphabetCount++;
        }
        else if (isdigit(inputString[i]))
        {
            alphabetCount++;
        }
        else if (strchr("\,\.\"\&", inputString[i]) != NULL)
        {
            punctuationCount++;
        }

        if (isspace(inputString[i]) && !isspace(inputString[i - 1]))
        {
            wordCount++;
        }
    }

    if (!isspace(inputString[strlen(inputString) - 1]))
    {
        wordCount++;
    }

    printf("The number of words: %d\n", wordCount);
    printf("The number of alphabets: %d\n", alphabetCount);
    printf("The number of punctuation marks: %d\n", punctuationCount);

    return 0;
}