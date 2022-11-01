#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* alloc_grid - check the code
*@width: The string to copy
*@height: the string to copy
* Return: Always 0.
*/
int **alloc_grid(int width, int height)
{
	int f = 0;
	int **i;
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	i = malloc(sizeof(int *) * height);

	if (i == NULL)
	{
		return (NULL);
	}

	for (; f < height; f++)
	{
		i[f] = malloc(sizeof(int) * width);
		if (i[f] == NULL)
		{
			while (f >= 0)
			{
				free(i[f]);
				f--;
			}
			free(i);
			return (NULL);
		}
	}
	return (i);
}
