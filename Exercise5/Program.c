#include <stdio.h>

void PrintArrayContents(int *array, int length);

int main()
{

}

void PrintArrayContents(int *array, int length)
{
	for (int i = 0; i < length; i++)
	{
		int valueAtIndex = array[i];
		printf("%d ", valueAtIndex);
	}
}