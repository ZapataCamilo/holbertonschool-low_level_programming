#include <stdio.h>
#include "main.h"
/**
*more_numbers - check the code.
*
* Return: Always 0.
*/
void print_line(int n)
{
	while (n > 0)
	{
		n--;
		_putchar('_');
	}
	_putchar('\n');
}
