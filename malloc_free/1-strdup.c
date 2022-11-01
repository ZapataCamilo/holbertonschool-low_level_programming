#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - check the code
*
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

	two = malloc(sizeof(*str + 1) * count);

	while (p < count)
	{
		two[p] = str[p];
		p++;
	}

	if (two == NULL)
	{
		return (NULL);
	}

	return (two);
	free(two);
}
