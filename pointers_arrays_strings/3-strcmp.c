#include <stdio.h>
#include "main.h"

/**
* _strcmp - check the code
*@s1: is a pointer
*@s2: is a pointer
* Return: Always 0.
*/
int _strcmp(char *s1, char *s2)
{
	int p = 0;
	int i = 0;

	while (i == 0)
	{
		p++;
		if (s1[p] != s2[i])
		{
			return (*s1 - *s2);
		}
	}
	return (0);
}
