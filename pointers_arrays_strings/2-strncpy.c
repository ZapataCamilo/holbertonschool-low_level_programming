#include <stdio.h>
#include "main.h"

/**
* _strncpy - check the code
*@dest: Is a string
*@src: Is pointer
*@n: Is a int
* Return: Always 0.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (dest[c] != '\0')
	{
		c++;
	}
	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	for (; c < n; c++)
	{
		dest[c] = '\0';
	}
	return (dest);
}
