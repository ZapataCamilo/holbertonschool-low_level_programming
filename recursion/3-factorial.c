#include <stdio.h>
#include "main.h"

/**
* factorial - the function should return -1 to indicate an error
*@n: Is lower than 0
* Return: Always 0.
*/
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
