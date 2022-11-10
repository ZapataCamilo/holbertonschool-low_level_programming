#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - executes a function given as a
  * parameter on each element of an array
  *@array: is the numbers to print
  *@size: is the size of hte parameter
  *@action: a action
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
