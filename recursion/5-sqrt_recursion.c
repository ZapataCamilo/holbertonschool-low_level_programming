#include <stdio.h>
#include "main.h"

/**
*sqrt_square - Is that make the square rooot
*@number: Is the result of the square root
*@re: Is n
* Return: Always 0.
*/
int sqrt_square(int number, int re)
{
	if (number * number == re)
	{
		return (number);
	}
	else if (number * number > re)
	{
		return (-1);
	}
	return (sqrt_square(number + 1, re));
}

/**
*_sqrt_recursion - Is that return the square root
*@n: is the result
* Return: Always 0.
*/
int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_square(1, n));
}
