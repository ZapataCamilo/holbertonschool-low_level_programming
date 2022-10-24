#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int n = 0;

	for (; s[n]; n++)
	{
		if (s[n] == c)
		{
			return (s + n);
		}
	}
	return (0);
}
