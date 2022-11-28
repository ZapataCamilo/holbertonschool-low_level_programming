#include <stdio.h>
#include "main.h"
/**
*print_line - check the code.
*@n: variable to check
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
