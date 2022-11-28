#include <stdio.h>

/**
  * main - check the code
  *@argc: Count the words
  *@argv: print string
  * Return: Always 0.
  */
int main(int argc, char *argv[])
{
	int n = 0;

	for (; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
