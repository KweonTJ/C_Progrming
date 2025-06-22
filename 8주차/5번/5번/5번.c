#include <stdio.h>
#include <ctype.h>

int main() 
{
    char inputString[100];
    int wordCount = 0;
    int letterCount = 0;
    int digitCount = 0;

    printf("Enter a sentence: ");
    fgets(inputString, sizeof(inputString), stdin);

    for (int i = 0; inputString[i] != '\0'; i++) 
    {
        if (isalpha(inputString[i])) 
        {
            letterCount++;
        }
        else if (isdigit(inputString[i])) 
        {
            digitCount++;
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

    printf("=================================================\n");
    printf("words count: %d\n", wordCount);
    printf("alphabet count: %d\n", letterCount);
    printf("number count: %d\n", digitCount);

    return 0;
}
