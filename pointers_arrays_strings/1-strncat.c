#include <stdio.h>
#include "main.h"

/**
* _strncat - check the code
*@dest: Is a string
*@src: Is pointer
*@n: Is a int
* Return: Always 0.
*/
char *_strncat(char *dest, char *src, int n)
{
	int c = 0;
	int b = 0;

	while (dest[c] != '\0')
	{
		c++;
	}
	for (b = 0; b < n; c++, b++)
	{
		dest[c] = src[b];
	}
	dest[c] = '\0';
	return (dest);
}
