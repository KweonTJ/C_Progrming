#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    int pieces[5];
    int sorted = 0;

    printf("input 5 numbers (1 ~ 5): ");

    for (int i = 0; i < 5; i++) 
    {
        scanf_s("%d", &pieces[i]);
    }

    while (sorted == 0) 
    {
        sorted = 1;

        for (int i = 0; i < 4; i++) 
        {
            if (pieces[i] > pieces[i + 1]) 
            {
                swap(&pieces[i], &pieces[i + 1]);
                printf("%d %d %d %d %d\n", pieces[0], pieces[1], pieces[2], pieces[3], pieces[4]);
                sorted = 0;
            }
        }
    }
    return 0;
}
