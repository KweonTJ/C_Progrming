#include <stdio.h>

int main()
{
	char name[20];
	int	kor = 0, eng = 0, math = 0;
	int sum = 0;
	int avg = 0;

	printf("name: ");
	scanf_s("%s", name, 20);

	printf("kor: ");
	scanf_s("%d", &kor);

	printf("eng: ");
	scanf_s("%d", &eng);

	printf("math: ");
	scanf_s("%d", &math);

	sum = kor + eng + math;
	avg = sum / 3;

	printf("========================================\n");
	printf("Name    Kor    Eng    Math    Sum    Avg\n");
	printf("========================================\n");
	printf("%s    %d     %d     %d      %d     %d\n", name, kor, eng, math, sum, avg);

	return 0;
}