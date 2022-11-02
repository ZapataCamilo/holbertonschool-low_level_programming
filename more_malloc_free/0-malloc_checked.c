#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - allocates memory using malloc
* @b: integer
* Return: pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
   	void *count;
	count = malloc(b);

	if (count == NULL)
	{
		exit(98);
	}

	return (count);
}
