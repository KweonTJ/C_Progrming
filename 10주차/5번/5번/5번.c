#include <stdio.h>

void step()
{
	static int totalSteps = 0;
	totalSteps++;
	printf("Totla setps: %d\n", totalSteps);
}

int main()
{
	for (int i = 0; i < 3; i++)
	{
		step();
	}

}