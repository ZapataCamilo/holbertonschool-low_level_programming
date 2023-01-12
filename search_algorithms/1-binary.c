#include "search.h"

int binary_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i != size; i++)
	{
		size_t m = (i + size) / 2;;
		if (array[i] == value)
		{
			return (i);
		}
		else if (!value)
			size = m;
			
	}
	return (-1);
}