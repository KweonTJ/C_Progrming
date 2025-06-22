#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* add_string(const char* str1, const char* str2) 
{
    if (str1 == NULL && str2 == NULL) 
    {
        return NULL;
    }

    size_t len1 = (str1 != NULL) ? strlen(str1) : 0;
    size_t len2 = (str2 != NULL) ? strlen(str2) : 0;

    if (len1 == 0 && len2 == 0) 
    {
        return NULL;
    }

    char* result = (char*)malloc(len1 + len2 + 3); 

    result[0] = '+';
    result[1] = '\0';

    if (result == NULL)
    {
        exit(EXIT_FAILURE);
    }

    if (str1 != NULL) 
    {
        strcpy(result, str1);
        strcat(result, "+");
    }

    strcat(result, str2);

    return result;
}

int main()
{
    char* str1 = NULL;
    char* str2 = NULL;
    char* str3 = NULL;

    str1 = add_string(NULL, "hello");
    str2 = add_string(str1, "world");
    str3 = add_string(str2, "HI");

    printf("%s", str3);

    free(str1);
    free(str2);
    free(str3);

    return 0;
}
