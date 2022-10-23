#include <stdio.h>
#include "main.h"

/**
* _memset - llena la memori
*@s: espacio de la memoria para llenar
*@n: Numero de espacio para llenar
*@b: byte para llenar
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
