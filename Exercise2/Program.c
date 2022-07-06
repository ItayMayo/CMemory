#include<stdio.h>

void swap(int* pointer1, int* pointer2);

int main()
{
	int num1 = 4;
	int num2 = 6;
	swap(&num1, &num2);
	printf("num1: %d, num2 = %d", num1, num2);
}

void swap(int* pointer1, int* pointer2)
{
	int pointer1Value = *pointer1;
	*pointer1 = *pointer2;
	*pointer2 = pointer1Value;
}