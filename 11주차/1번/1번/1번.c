#define _CRT_SECURE_NO_WARNIGNS
#include <stdio.h>

int main()
{
	typedef char MyType1;
	typedef unsigned char MyType2;
	typedef short MyType3;
	typedef unsigned int MyType4;

	MyType1 a1 = 12760;
	MyType1 b1 = 23846;
	MyType1 sum1 = a1 + b1;

	MyType2 a2 = 12760;
	MyType2 b2 = 23846;
	MyType2 sum2 = a2 + b2;

	MyType3 a3 = 12760;
	MyType3 b3 = 23846;
	MyType3 sum3 = a3 + b3;

	MyType4 a4 = 12760;
	MyType4 b4 = 23846;
	MyType4 sum4 = a4 + b4;

	printf("%d %d %d %d\r\n", sum1, sum2, sum3, sum4);
}