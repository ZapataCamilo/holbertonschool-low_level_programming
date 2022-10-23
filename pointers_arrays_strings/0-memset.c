#include <stdio.h>
#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c = 0;

	for (; c < n; c++)
	{
		s[c] = b;
	}
	return (s);
}
