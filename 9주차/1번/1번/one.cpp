#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char str[512] = { 0 };
    char origin[512] = { 0 };

    printf("input string: ");
    gets_s(str, sizeof(str));

    strcpy(origin, str);

    for (int i = 0; i < (int)strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }

    printf("%s -> %s\n", origin, str);

    return 0;
}
