#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * array_range - check the code
 *@min: is the min value
 *@max: is the max values
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int *array = 0;
	int index = 0;
	int index_2;

	if (min > max)
		return (NULL);

	index_2 = (max - min) + 1;

	array = malloc(sizeof(int) * index_2);

	if (array == NULL)
		return (NULL);

	for (; index < index_2; index++)
		array[index] = min + index;

	return (array);

	free(array);
}
