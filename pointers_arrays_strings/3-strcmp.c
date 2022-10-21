#include <stdio.h>
#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/
int _strcmp(char *s1, char *s2)
{
	int p = 0;

	for (; s1[p] != s2[p]; p++)
	{
		return (*s1 - *s2);
	}
	return (0);
}
