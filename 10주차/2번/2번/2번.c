#include <stdio.h>

int main()
{
	int num = 0;

	printf("input 3 digit number: ");
	scanf_s("%d", &num);

	printf("%d, ", num / 100);
	num = num % 100;
	printf(" %d, ", num / 10);
	num = num % 10;
	printf(" %d", num / 1);
	num = num % 1;
}