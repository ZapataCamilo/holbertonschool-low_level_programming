#include <stdio.h>
#include "main.h"
#include <string.h>

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
	int b;

	b = strlen(dest);

	if (src[0] != '\0')
	{
		for (; c < n; c++, b++)
		{
			dest[b] = src[c];
		}
		dest[b + 1] = '\0';
	}
	return (dest);
}
