#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * create_array - Is the funtion that is call
  *@size: Is the length of malloc
  *@c: Is the char that I print
  *
  *  Return: Always 0.
*/

char *create_array(unsigned int size, char c)
{
	unsigned int n = 0;
	char *punt;

	punt = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (punt == NULL)
	{
		return (NULL);
	}
	for (; n < size; n++)
	{
		punt[n] = c;
	}
	return (punt);
}
