#include <stdio.h>
#include "Rectangle.h"

void initializeRect(Rectangle* rectangle, int width, int height);

int main()
{
	Rectangle rectangle;
	initializeRect(&rectangle, 50, 20);
	printf("Width: %d, Height: %d.", rectangle.width, rectangle.height);
}

void initializeRect(Rectangle* rectangle, int width, int height)
{
	rectangle->width = width;
	rectangle->height = height;
}