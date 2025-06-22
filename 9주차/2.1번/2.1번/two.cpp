#include <stdio.h>
#include <ctype.h>

int main()
{
    char sentence[1000];
    int wordCount = 0, alphabetCount = 0, punctuationCount = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; sentence[i] != '\0'; ++i) 
    {
        if (sentence[i] == '\n') {
            sentence[i] = '\0';
            break;
        }
    }

    for (int i = 0; sentence[i] != '\0'; ++i) 
    {
        if (isalpha(sentence[i])) 
        {
            alphabetCount++;
        }
        else if (isspace(sentence[i]))
        {
            wordCount++;
        }
        else if (ispunct(sentence[i])) 
        {
            punctuationCount++;
        }
    }

    printf("The number of words: %d\n", wordCount);
    printf("The number of alphabets: %d\n", alphabetCount);
    printf("The number of punctuation: %d\n", punctuationCount);

    return 0;
}
