#include <stdio.h>
#include "main.h"

/**
*_puts - check the code
*@str: is the pointer
* Return: Always 0.
*/

void _puts(char *str)
{
	int p = 0;

	while (str[p] != 0)
	{
		_putchar(str[p]);
		p++;
		_putchar('\n');
	}
}
