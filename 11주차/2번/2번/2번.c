#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap_number(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main(void)
{
	int num1;
	int num2;
	printf("input 2 number.");
	scanf_s("%d, %d", &num1, &num2);

	printf("%d, %d ->", num1, num2);
	swap_number(&num1, &num2);
	printf("%d, %d\n", num1, num2);

	return 0;
}