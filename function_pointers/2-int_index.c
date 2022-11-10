#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index - Entry point
  *@array: is the number to print
  *@size: is the sie of the parameter
  *@cmp:  is a pointer to the function to be used to compare values
  * Return: Always 0 (SUccess)
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size == 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
