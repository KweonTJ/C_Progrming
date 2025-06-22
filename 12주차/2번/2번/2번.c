#include <stdio.h>

int main() {
    int end_row, columns, max_step;

    printf("please input end row, col, max step: ");
    scanf_s("%d %d %d", &end_row, &columns, &max_step);

    for (int row = 1; row <= end_row; row++)
    {
        for (int i = 1; i <= columns * max_step; i++)
        {
            int current_column = (i - 1) % columns + 1;
            int current_step = (i - 1) / columns + 1;
            int result = row * current_column * current_step;
            printf("%d x %d = %d\t", row, current_column, result);
            if (current_column == columns)
            {
                printf("\n");
            }
        }
        printf("\n");
    }

    return 0;
}