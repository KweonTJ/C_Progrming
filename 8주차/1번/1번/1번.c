#include <stdio.h>

int main() 
{
    char alphabets[26];

    char currentChar = 'Z';
    for (int i = 0; i < 26; i++) 
    {
        alphabets[i] = currentChar;
        currentChar--;
    }

    for (int i = 0; i < 26; i++) 
    {
        printf("%c", alphabets[i]);
    }

    printf("\n");
    return 0;
}