#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _calloc - check the code
 *@nmemb: is the length of memory of _calloc
 *@size: is the length of stirng
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str = NULL;
	unsigned int index = 0;
	unsigned int total = nmemb * size;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	str = malloc(total);

	if (str == NULL)
		return (NULL);

	for  (; index < total; index++)
		str[index] = 0;

	return (str);

}
