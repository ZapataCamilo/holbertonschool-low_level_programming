#include <stdio.h>
#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/
void puts2(char *str)
{
	int p = 0;
	
	while (*(str+p))
	{
		putchar(*(str + p));
		p = p + 2;
	}
	putchar('\n');
}
