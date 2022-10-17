#include <stdio.h>
#include "main.h"
/**
*print_diagonal - check the code.
*@n: variable to check
* Return: Always 0.
*/
void print_diagonal(int n)
{
	int l, f;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else 
	{
		for (l = 0; n > 0; l++)
		{
			_putchar('\\');
			_putchar('\n');
			for (f = 0; f < l; f++)
			{
				_putchar(' ');
			}
		}
	}
}
