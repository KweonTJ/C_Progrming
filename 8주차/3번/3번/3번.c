#include <stdio.h>

int main() {
    double matrix1[2][2];
    double matrix2[2][2];
    double result[2][2];

    // ��� 1 �Է� �ޱ�
    printf("Input A matrix: ");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            scanf_s("%lf", &matrix1[i][j]);
        }
    }

    // ��� 2 �Է� �ޱ�
    printf("Input B matrix: ");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            scanf_s("%lf", &matrix2[i][j]);
        }
    }

    // ��� �� ���
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            result[i][j] = 0;
            for (int k = 0; k < 2; k++) 
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // ��� ���
    printf("Maxtrix Multiplication\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf(" %.1f", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
