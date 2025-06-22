#include <stdio.h>

void show_matrix(int*, int, int);

int main()
{
	int matrix1[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	show_matrix((int*)matrix1, 3, 3);

	printf("\n");

	int matrix2[3][4] = { {1,2,3,4 }, { 5,6,7,8 }, { 9, 10, 11, 12 }};
	show_matrix((int*)matrix2, 3, 4);

	return 0;
}

void show_matrix(int* m, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%3d", *((m + i * col) + j));
		}
		printf("\n");
	}
}