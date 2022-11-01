#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - check the code
*@str: The string to copy
* Return: Always 0.
*/
char *_strdup(char *str)
{
	unsigned int count = 0;
	char *two = NULL;
	unsigned int p = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[count] != '\0')
	{
		count++;
	}

	two = malloc(sizeof(*str) * count + 1);

	if (two == NULL)
	{
		return (NULL);
	}

	while (p < count)
	{
		two[p] = str[p];
		p++;
	}
	return (two);
	free(two);
}
