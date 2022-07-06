#include <stdio.h>

int StoreFibonnaciInArray(int *array, int arrayLength);

int main()
{
	int array[8];
	int arrayLength = sizeof(array) / sizeof(array[0]);
	StoreFibonnaciInArray(array, arrayLength);

	for (int i = 0; i < arrayLength; i++)
	{
		printf("Cell %d: %d\n", i, array[i]);
	}
}

int StoreFibonnaciInArray(int *array, int arrayLength)
{
	for (int i = 0; i < arrayLength; i++)
	{
		if (i < 2)
		{
			array[i] = i;
		}
		else
		{
			int lastValue = array[(i - 2)];
			int currentValue = array[(i - 1)];
			array[i] = currentValue + lastValue;
		}
	}
}