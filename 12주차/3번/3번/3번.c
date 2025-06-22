#define _CRT_SECURE_NO_WARNINGS 1

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

    char* result = (char*)malloc(len1 + len2 + 2);

    if (result == NULL)
    {
        exit(EXIT_FAILURE);
    }

    if (str1 != NULL)
    {
        strncpy_s(result, len1 + len2 + 2, str1, len1);
        strcat(result, " ");
    }

    if (str2 != NULL)
    {
        strncat_s(result, len1 + len2 + 2, str2, len2);
    }

    return result;
}

int main()
{
    char* str1 = NULL;
    char* str2 = NULL;
    char* str3 = NULL;

    str1 = add_string("hello", NULL);
    str2 = add_string(str1, "world");
    str3 = add_string("Hi", str2);

    printf("%s", str3);

    free(str1);
    free(str2);
    free(str3);
 }