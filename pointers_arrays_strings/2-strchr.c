#include <stdio.h>
#include "main.h"

/**
 * _strchr - check the code
 *@s: Is a string that have the value
 *@c: Is a char
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
	if (s[n] == c)
	{
		return (s + n);
	}
	return (0);
}
