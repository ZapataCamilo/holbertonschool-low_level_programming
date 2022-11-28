#include <stdio.h>
#include "main.h"
/**
*more_numbers - check the code.
*
* Return: Always 0.
*/
void more_numbers(void)
{
	int c = 0;
	int b = 0;

	do {
		while (b <= 14)
		{
			if (b > 9)
				_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			b++;
		}
		_putchar('\n');
		c++;
		b = 0;
	} while (c <= 9);
}
