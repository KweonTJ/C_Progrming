#include <stdio.h>

int main()
{
    int gugu_table[100][100]; 

    for (int dan = 1; dan <= 99; dan++)
    {
        for (int hang = 1; hang <= 99; hang++)
        {
            gugu_table[dan - 1][hang - 1] = dan * hang;
        }
    }

    int dan, hang;

    while (1)
    {
        printf("input: ");
        if (scanf_s("%d x %d", &dan, &hang) == 2)
        {
            if (dan >= 1 && dan <= 99 && hang >= 1 && hang <= 99)
            {
                int result = gugu_table[dan - 1][hang - 1];
                printf("%d * %d = %d\n", dan, hang, result);
                break;
            }
        }
    }
    return 0;
}


