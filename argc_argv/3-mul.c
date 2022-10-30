#include <stdio.h>
#include <stdlib.h>

/**
  * main - check the code
  *@argc: In this code give me the number of strings
  *@argv: Do anything
  * Return: Always 0.
  */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) *atoi(argv[2]));
	}
	return (0);
}
