#include <stdio.h>

void transpose_matrix_4x4(int m[][4]);
void show_matrix_4x4(int m[][4]);

int main()
{
	int matrix1[4][4] = { {1, 2, 3, 1},{4, 5, 6, 2},{7, 8, 9, 3},{5, 3, 2, 1} };
	int matrix2[4][4] = { {10, 32, 13, 34},{43, 13, 14, 34},{54, 24, 99, 11},{11, 22, 33, 44} };

	printf("matrix: \n");
	show_matrix_4x4(matrix1);

	printf("transpose of matrix: \n");
	transpose_matrix_4x4(matrix1);
	show_matrix_4x4(matrix1);


	printf("\nmatrix: \n");
	show_matrix_4x4(matrix2);

	printf("transpose of matrix: \n");
	transpose_matrix_4x4(matrix2);
	show_matrix_4x4(matrix2);

	return 0;
}

void transpose_matrix_4x4(int m[][4])
{
	int temp;
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			temp = m[i][j];
			m[i][j] = m[j][i];
			m[j][i] = temp;
		}
	}
}

void show_matrix_4x4(int m[][4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}