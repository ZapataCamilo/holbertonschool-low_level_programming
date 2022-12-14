#include <stdio.h>
#include "main.h"

/**
* _strcat - The name of the funtion
*@dest: the pointer of the funtion
*@src : Pointer of the funttion
* Return: Always 0.
*/
char *_strcat(char *dest, char *src)
{
	int p = 0;
	int f = 0;

	while (dest[p] != '\0')
	{
		p++;
	}
	for (f = 0; src[f] != '\0'; f++, p++)
	{
		dest[p] = src[f];
	}
	dest[p] = '\0';
	return (dest);
}
