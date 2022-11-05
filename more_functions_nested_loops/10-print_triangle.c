#include <stdio.h>
#include "main.h"

/**
* print_triangle - pritn a triangle
*@size: Is the size of triangle
* Return: Always 0.
*/
void print_triangle(int size)
{
	int tr;
	int item;

	if (size <= 0)
		_putchar('\n');
	for (tr = 0; tr < size; tr++)
	{
		for (item = 0; item < size; item++)
		{
			if (item < (size - 1) - tr)
			{
				_putchar(' ');
			}
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
