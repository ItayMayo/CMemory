#include <stdio.h>

void fileCopy(FILE* sourceFile, FILE* destFile);

int main() 
{
	FILE* sourceFile;
	FILE* destFile;
	fopen_s(&sourceFile, "source.txt", "r");
	fopen_s(&destFile, "dest.txt", "w");

	fileCopy(sourceFile, destFile);

	fclose(sourceFile);
	fclose(destFile);
}

void fileCopy(FILE* sourceFile, FILE* destFile)
{
	char currentChar;
	while ((currentChar = fgetc(sourceFile)) != EOF)
	{
		fputc(currentChar, destFile);
	}
	printf("Done");
}