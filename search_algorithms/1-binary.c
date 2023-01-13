#include "search_algos.h"

/**
 * binary_search - to search a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:  is the value to search for
 * Return: the first index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, sd, m;

	sd = size - 1;
	if (!array)
		return (-1);

	while (i <= sd)
	{
		printf("Searching in array: ");
		for (m = i; m <= sd; m++)
		{
			printf("%d", array[m]);
			if (m < sd)
				printf(", ");
		}
		printf("\n");
		m = (i + sd) / 2;
		if (value > array[m])
			i = m + 1;
		else if (value < array[m])
			sd = m - 1;
		else
			return (m);
	}
	return (-1);
}
