#include<stdio.h>

void add(int* pNum, int incBy);

int main()
{
	int num = 3;
	int incBy = 2;
	add(&num, incBy);
	printf("num: %d", num);
}

void add(int* pNum, int incBy)
{
	*pNum = *pNum + incBy;
}