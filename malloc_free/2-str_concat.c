#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - check the code
*@str: The string to copy
* Return: Always 0.
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int count = 0;
	char *two = NULL;
	unsigned int p = 0;
	unsigned int i = 0;
	unsigned int l = 0;

	while (s1[count] != '\0')
	{
		count++;
	}
	while (s2[p] != '\0')
	{
		p++;
	}

	two = malloc(sizeof(*s1) * (count + p) + 1);

	if (two == NULL)
	{
		return (NULL);
	}

	while (i < count)
	{
		two[i] = s1[i];
		i++;
	}

	while (l < p)
	{
		two[i + l] = s2[l];
		l++;
	}
	return (two);
	free(two);
}
