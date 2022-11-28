#include <stdio.h>
#include "main.h"
#include <string.h>

/**
*puts2 - check the code
*@str: is the pointer
* Return: Always 0.
*/
void puts2(char *str)
{
	int p = 0;

	while (p < (int)strlen(str))
	{
		_putchar(*(str + p));
		p++;
		p++;
	}
	_putchar('\n');
}
