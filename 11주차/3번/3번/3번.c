#include <stdio.h>
#include <string.h>

void* my_memcpy(void* dest, const void* source, size_t size)
{
	for (size_t i = 0; i < size; ++i)
	{
		*((char*)dest + i) = *((const char*)source + i);
	}
	return dest;
}

int main()
{
	int input = 6;
	int output = 0;
	my_memcpy(&output, &input, sizeof(int));
	printf("%d\n", output);

	char input2[16] = "Hello";
	char output2[16] = { 0 };
	my_memcpy(&output2, &input2, sizeof(input2));
	printf("%s\n", output2);

	double input3 = 4.5246;
	double output3 = 0.0;
	my_memcpy(&output3, &input3, sizeof(input3));
	printf("%f\n", output3);
	
	return 0;
}