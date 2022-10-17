#include <stdio.h>
#include "main.h"
/**
*print_square - check the code.
*@n: variable to check
* Return: Always 0.
*/
void print_square(int size)
{
	int f;
	int r;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (f = 0; f < size; f++)
	{
		for (r = 0; r < size; r++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
