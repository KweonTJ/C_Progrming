#include <stdio.h>

int main() {
    double matrix1[2][2];
    double matrix2[2][2];
    double result[2][2];

    // 행렬 1 입력 받기
    printf("Input A matrix: ");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            scanf_s("%lf", &matrix1[i][j]);
        }
    }

    // 행렬 2 입력 받기
    printf("Input B matrix: ");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            scanf_s("%lf", &matrix2[i][j]);
        }
    }

    // 행렬 곱 계산
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

    // 결과 출력
    printf("Maxtrix Multiplication\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf(" %.1f", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
