#include<stdio.h>
#include "Rectangle.h"

void PrintRectangleInformation(Rectangle *rectangles, int length);

int main()
{

}

void PrintRectangleInformation(Rectangle *rectangles, int length)
{
	for (int i = 0; i < length; i++)
	{
		Rectangle currentRectangle = rectangles[i];
		printf("Rectangle #%d\n", i);
		printf("Width = %d\n", currentRectangle.width);
		printf("Height = %d\n", currentRectangle.height);
		printf("\n");
	}
}