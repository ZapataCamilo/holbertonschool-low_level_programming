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

	str = malloc(sizeof(char) * size - size);

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	if (str == NULL)
		return (NULL);
	for(nmemb = 0; nmemb < size; nmemb++)
		str[nmemb] = str[size];

	free (str);
	return (str);

}
