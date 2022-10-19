#include <stdio.h>
#include "main.h"

/**
*puts2 - check the code
*@str: is the pointer
* Return: Always 0.
*/
void puts2(char *str)
{
	int p = 0;

	while (*(str + p))
	{
		_putchar(*(str + p));
		p++;
		p++;
	}
	putchar('\n');
}
