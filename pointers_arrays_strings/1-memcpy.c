#include <stdio.h>
#include "main.h"

/**
 * _memcpy - the funtion that copy n bytes
 * @src: the  string that have n bytes
 * @dest: The stirng that i returns the value
 *@n: the value of src
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p = 0;

	for (; p < n; p++)
	{
		dest[p] = src[p];
	}
	return (dest);
}
