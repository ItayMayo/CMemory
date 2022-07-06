#include <stdio.h>

void charArrCopy(char* origArray, char* newArray, int length);
int charArrCompare(char* array1, char* array2, int length);
void charArrSetValues(char* array, char value, int length);
void charArrSwap(char* array1, char* array2, int length);

int main()
{
	// d - אותו דבר ל Rectangle.
	/*int a[10];
	int b[10];

	for (int i = 1; i <= 10; i++)
	{
		a[i - 1] = i;
	}

	int length = 10 * sizeof(a[0]);
	charArrCopy(a, b, length);*/
	// ENDOF d
	//f
	char test[8] = "Test1234";
	charArrSwap(test, &test[4], 4);
	printf("%s", test);
	//ENDOF f
}

void charArrCopy(char *origArray, char *newArray, int length)
{
	for (int i = 0; i < length; i++)
	{
		newArray[i] = origArray[i];
	}
}

int charArrCompare(char* array1, char* array2, int length)
{
	for (int i = 0; i < length; i++)
	{
		if (array1[i] != array2[i])
		{
			return 0;
		}
	}

	return 1;
}

void charArrSetValues(char* array, char value, int length)
{
	for (int i = 0; i < length; i++)
	{
		array[i] = value;
	}
}

void charArrSwap(char* array1, char* array2, int length)
{
	for (int i = 0; i < length; i++)
	{
		char array1Value = array1[i];
		array1[i] = array2[i];
		array2[i] = array1Value;
	}
}