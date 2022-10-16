#include "main.h"
#include <stdio.h>

/**
*more_numbers - check the code.
*
* Return: Always 0.
*/
void more_numbers(void)
{
	int c;
	int b;

	for (c = 0; c <= 9; c++)
	{
		for (b = 0; b <= 9; b++)
		{
			_putchar(b + '0');
		}
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar(b / 10 + '0');
				_putchar(b % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
