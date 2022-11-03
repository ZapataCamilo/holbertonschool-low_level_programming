#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strlen - check the code
 *@s: is the pointer
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str = NULL;
	unsigned int index = 0;

	str = malloc(nmemb * size);

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	if (str == NULL)
		return (NULL);
	for(; index < (nmemb * size); index++)
		str[index] = 0;

	return (str);

}
