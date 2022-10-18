#include <stdio.h>
#include "main.h"
#include <string.h>

/**
*print_rev - check the code
*@s: is the poimter
* Return: Always 0.
*/
void print_rev(char *s)
{
	int len_s = 0;

	len_s = _strlen(s);
	while (len_s != 0)
	{
		putchar(*(s+len_s));
		len_s--;
	}
	putchar('\n');
}
