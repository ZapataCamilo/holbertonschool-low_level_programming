#include <stdio.h>
#include "main.h"
#include <string.h>

/**
*print_rev - check the code
*
* Return: Always 0.
*/
void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	while (l)
	{
		putchar(s[--l]);
	}
	putchar('\n');
}
